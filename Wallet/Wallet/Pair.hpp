#pragma once
#ifndef TemplateP_HPP // a, b
#define TemplateP_HPP
#include <iostream>
#include <ctime>
#include <iomanip> 
#include <conio.h>
using namespace std;
template <typename T, typename P>
struct Pair {
	T first;
	P second;
	Pair(T f, P s) :first(f), second(s) {};
	Pair() =default;
};


#endif