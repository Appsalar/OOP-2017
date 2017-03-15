#include "String.h"
#include <cstring>

char* strduplicate(const char* str)
{
	if (!str)
		return NULL;

	char* tmp = new char[strlen(str) + 1];
	strcpy(tmp, str);
	return tmp;
}

String::String()
{
	pStr = NULL;
	size = 0;
}

String::String(const char * str)
{
	pStr = NULL;

	setString(str);
}

String::String(const String & other)
{
	setString(other.pStr);
}

String & String::operator=(const String & other)
{
	if (this != &other)
	{
		setString(other.pStr);
	}
	return *this;
}


String::~String()
{
	delete[] pStr;
}

void String::setString(const char * str)
{
	delete[] pStr;
	if (!str)
	{
		pStr = NULL;
		size = 0;
	}
	else
	{
		pStr = strduplicate(str);
		size = strlen(str);
	}
}

const char * String::getString() const
{
	return pStr;
}
