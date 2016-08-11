#include "TestType.h"
#include <iostream>

typedef std::basic_string<TCHAR> tstring;
typedef std::basic_stringstream<TCHAR> tstream;

#ifdef _UNICODE
#define tcout wcout
#else
#define tcout cout
#endif

TestType::TestType(void)
{
	m_name = _T("Name");
	m_number = 123;
}
TestType::~TestType(void)
{
}
void TestType::Output()
{
	std::tcout << _T("name=") << m_name << _T(" number=") << m_number << std::endl;
}