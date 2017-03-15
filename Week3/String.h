#pragma once
class String
{
public:
	String();
	String(const char*);
	String(const String&);
	String& operator=(const String&);
	~String();

	void setString(const char*);
	const char* getString() const;

private:
	char* pStr;
	size_t size;
};

