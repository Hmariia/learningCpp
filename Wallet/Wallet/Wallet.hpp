#pragma once
#ifndef TemplateW_HPP // a, b
#define TemplateW_HPP
#include <iostream>
#include <ctime>
#include <iomanip> 
#include <conio.h>
#include "String.hpp"
#include "Pair.hpp"
#include "Vector.hpp"
using namespace std;
enum class Currency {
	Unknown = 0,
	USD = 840,
	UAH = 980
};

ostream & operator<<(ostream & out, Currency c);
istream & operator>>(istream & in, Currency c);

class Wallet {
	static int counter;
	String owner;
	int ID;
	Vector < Pair<Currency, double>> money;
public: Wallet(String _owner = String(""), Currency _money = Currency::Unknown)
	:owner(_owner)
	{
	ID = ++counter;
	money.push_back(Pair<Currency, double>(_money, 0));
}
	template <typename T, typename P>
	friend ostream& operator<<(ostream& out, Wallet& f);

	template <typename T, typename P>
	friend istream& operator<<(ostream& in, Wallet& f);
	
	


};
String CurrencyToString(Currency c);
Currency CurrencyParse(int c);

#endif


