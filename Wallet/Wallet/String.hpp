#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <ctime>
#include <iomanip> 
#include <conio.h>
#include <iostream>
using namespace std;
class String {
private: static int max_size;
		 char* str;
		 int size;

public: ~String();

public: String(int count = 0, char symbol = '\0');
public: String(const char *_str);
public: String(const String&_str);
		void read();
		void resize(int new_size);
		void String::write();
		String& String::append(const String &s);
};