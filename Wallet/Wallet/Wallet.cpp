#pragma once
#ifndef TemplateW_CPP // a, b
#define TemplateW_CPP
#include "Wallet.hpp"

int Wallet::counter = 0;
template<typename T, typename P>
ostream & operator<<(ostream & out, Wallet & f)
{
	for (P i = P(); i < length; ++i) cout << data[i] << "  ";
	cout << endl;
	return out;
}
ostream & operator<<(ostream & out, Currency c)
{
	cout << (int)c << endl;
	return out;
}

String CurrencyToString(Currency c)
{
	switch (c) {
	case Currency::Unknown: return String("Unknown");
	case Currency::UAH: return String("UAN");
	case Currency::USD: return String("USD");
	}
}
Currency CurrencyParse(int c)
{
	return (Currency)c;
}

istream & operator >> (istream & in, Currency c)
{
	cin >> c;
	return in;
}

#endif
