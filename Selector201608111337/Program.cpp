#include "SelectorTest_Int.h"
#include "SelectorTest_IntPtr.h"

int _tmain(int argc, _TCHAR* argv[])
{
	SelectorTest_Int test_int;
	test_int.Test();

	SelectorTest_IntPtr test_intPtr;
	test_intPtr.Test();
}
