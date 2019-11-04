#include "Production.h"
#include <iostream>
#include <assert.h>

using namespace std;

int main()
{
	Production p;
	/*p.someMethod(10);
	*/

	int a[6];

	for (int i = 0; i < 6; i++)
	{
		a[i] = p.inputNumbers();
	}
	for (int i = 0; i < 6; i++)
	{
		assert(p.checkNumbers(a,i) == 0);		
		assert(p.checkRange(a, i) == 0);
		assert(p.checkRepeatNums(a, i) == 0);
	}
//	assert(p.someMethod(a) == 1);
	cin.get();
	system("pause");
	return 0;
}
