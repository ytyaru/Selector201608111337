#pragma once
#include <tchar.h>
#include <string>

class TestType
{
public:
	TestType(void);
	~TestType(void);
	void Output();
private:
	int m_number;
	std::basic_string<TCHAR> m_name;
};

