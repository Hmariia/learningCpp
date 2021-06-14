#pragma once
#ifndef TemplateV_CPP // a, b
#define TemplateV_CPP
#include "Vector.hpp"
template<typename T, typename P>
Vector<T, P>::Vector(P _length, const T * _data) :length(_length)
{
	data = new T[length]{ T() };
	if (_data)
		for (P i = P(); i < length; ++i) data[i] = _data[i];
}
template<typename T, typename P>
void Vector<T, P>::push_back(T& value)
{
	T* old = data;
	data = new T[length+1]{ T() };
	for (P i = P(); i <length; ++i) data[i] = old[i]; 
	data[length] = value;
	delete[] old;
}
template <typename T, typename P = size_t>
ostream& operator<<(ostream& out, const Vector<T, P> vobj)
{
	for (P i = P(); i < vobj.length; ++i) cout << vobj.data[i] << "  ";
	cout << endl;
	return out;
}

#endif