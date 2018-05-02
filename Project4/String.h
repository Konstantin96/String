#pragma once
#include <iostream>
#include <cstring>

using namespace std;

class String {
private:
	char* m_stringRep;
	size_t length;
public:
	String(const char*str);
	String(size_t len, char s);
	String(size_t len);

	const char *getStrRep();
	char& getAt(size_t pos);
	String& AddCharAt(size_t pos, char c);
	String& DelCharAt(size_t pos);

	void operator()(const char*str);

	~String() { delete[]m_stringRep; }
};