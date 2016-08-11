#include "SelectorTest_IntPtr.h"
#include <assert.h>
#include "Selector.h"
#include "Selector.cpp" // templateé¿ëïÇ‡å^Ç∆ÇµÇƒì«Ç›çûÇﬁïKóvÇ™Ç†ÇÈ
using ytyaru::Framework::Container::Selector;

template class Selector<int*>;

SelectorTest_IntPtr::SelectorTest_IntPtr(void)
{
}
SelectorTest_IntPtr::~SelectorTest_IntPtr(void)
{
}
void SelectorTest_IntPtr::Test()
{
	Add0();
    Select0();
    GetSelected0();
	IsContain0();
}
void SelectorTest_IntPtr::Add0()
{
	Selector<int*> s;
	int a = 100;
	s.Add(_T("a"), &a);
	s.Select(_T("a"));
	assert(s.IsContain(_T("a")));
	assert(&a == s.GetSelected());
}
void SelectorTest_IntPtr::Select0()
{
	Selector<int*> s;
	int a=0, b=1, c=2;
	s.Add(_T("a"), &a);
	s.Add(_T("b"), &b);
	s.Add(_T("c"), &c);
	
	s.Select(_T("b"));
	assert(&b == s.GetSelected());

	s.Select(_T("c"));
	assert(&c == s.GetSelected());

	s.Select(_T("a"));
	assert(&a == s.GetSelected());
}
void SelectorTest_IntPtr::GetSelected0()
{
	Selector<int*> s;
	int a=0, b=1, c=2;
	s.Add(_T("a"), &a);
	s.Add(_T("b"), &b);
	s.Add(_T("c"), &c);
	
	s.Select(_T("b"));
	assert(&b == s.GetSelected());

	s.Select(_T("c"));
	assert(&c == s.GetSelected());

	s.Select(_T("a"));
	assert(&a == s.GetSelected());
}
void SelectorTest_IntPtr::IsContain0()
{
	Selector<int*> s;
	int a=0, b=1, c=2;
	
	assert(!s.IsContain(_T("a")));
	s.Add(_T("a"), &a);
	assert(s.IsContain(_T("a")));
	assert(!s.IsContain(_T("b")));
	s.Add(_T("b"), &b);
	assert(s.IsContain(_T("b")));
	assert(!s.IsContain(_T("c")));
	s.Add(_T("c"), &c);
	assert(s.IsContain(_T("c")));
}
