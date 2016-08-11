#include "SelectorTest_Int.h"
#include <assert.h>
#include "Selector.h"
#include "Selector.cpp" // template�������^�Ƃ��ēǂݍ��ޕK�v������
using ytyaru::Framework::Container::Selector;

template class Selector<int>;

SelectorTest_Int::SelectorTest_Int(void)
{
}
SelectorTest_Int::~SelectorTest_Int(void)
{
}
void SelectorTest_Int::Test()
{
    Add0();
    Select0();
    GetSelected0();
	IsContain0();
}
void SelectorTest_Int::Add0()
{
	Selector<int> s;
	int a = 100;
	s.Add(_T("a"), a);
	s.Select(_T("a"));
	assert(s.IsContain(_T("a")));
	assert(100 == s.GetSelected());
}
void SelectorTest_Int::Select0()
{
	Selector<int> s;
	int a=0, b=1, c=2;
	s.Add(_T("a"), a);
	s.Add(_T("b"), b);
	s.Add(_T("c"), c);
	
	s.Select(_T("b"));
	assert(1 == s.GetSelected());

	s.Select(_T("c"));
	assert(2 == s.GetSelected());

	s.Select(_T("a"));
	assert(0 == s.GetSelected());
}
void SelectorTest_Int::GetSelected0()
{
	Selector<int> s;
	int a=0, b=1, c=2;
	s.Add(_T("a"), a);
	s.Add(_T("b"), b);
	s.Add(_T("c"), c);
	
	s.Select(_T("b"));
	assert(1 == s.GetSelected());

	s.Select(_T("c"));
	assert(2 == s.GetSelected());

	s.Select(_T("a"));
	assert(0 == s.GetSelected());
}
void SelectorTest_Int::IsContain0()
{
	Selector<int> s;
	int a=0, b=1, c=2;
	
	assert(!s.IsContain(_T("a")));
	s.Add(_T("a"), a);
	assert(s.IsContain(_T("a")));
	assert(!s.IsContain(_T("b")));
	s.Add(_T("b"), b);
	assert(s.IsContain(_T("b")));
	assert(!s.IsContain(_T("c")));
	s.Add(_T("c"), c);
	assert(s.IsContain(_T("c")));
}
