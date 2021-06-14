#include "String.hpp"
int String::max_size = BUFSIZ;

String::~String()
{
	/*cout << "dctor\n";*/

	delete[] str;
}

String::String(int count, char symbol)
{
	str = new char[count + 1]{ '\0' };
	for (int i = 0; i < count; ++i)
		str[i] = symbol;
	str[count] = '\0';
}

void String::write()
{
	cout << str;
}

String& String::append(const String &s)
{
	int k = 0;
	int m = strlen(str);
	char* buf = new char[m + strlen(s.str) + 1];
	for (int i = 0; i < m + strlen(s.str); i++) {
		if (i < strlen(str))
			buf[i] = str[i];
		else {
			buf[i] = s.str[k];
			k++;
		}
	}
	buf[m + strlen(s.str)] = '\0';
	delete[] str;
	str = buf;

	return *this;
}


String::String(const char * _str)
{
	str = new char[strlen(_str) + 1];
	strcpy(str, _str);
}

String::String(const String & _str)
{
	str = new char[strlen(_str.str) + 1];
	strcpy(str, _str.str);
}

void String::read()
{
	char* buf = new char[max_size];
	cin.getline(buf, max_size);
	int length = strlen(buf);
	if (length > strlen(str))
		this->resize(length + 1);
	strcpy(str, buf);
}

void String::resize(int new_size)
{
	delete[]str;
	str = new char[new_size];
}