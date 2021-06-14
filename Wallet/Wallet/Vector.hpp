#pragma once
#ifndef TemplateV_HPP // a, b
#define TemplateV_HPP
#include <iostream>
#include <ctime>
#include <iomanip> 
#include <conio.h>
using namespace std;
template <typename T, typename P = size_t>
class Vector
{
	P length = P();
	T * data = nullptr;
public: Vector() = default;
		explicit Vector(P _length, const T*_data = nullptr);

		template <typename T, typename P = size_t>
		friend ostream& operator<<(ostream& out, const Vector <T, P> vobj);
public: void push_back(T& value);
};


#include "Vector.cpp"
#endif
