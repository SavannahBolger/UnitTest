#include "Production.h"
#include "GameObject.h"
#include <iostream>
#include <assert.h>

using namespace std;
GameObject a[6];

int main()
{
	Production p;
	/*p.someMethod(10);
	*/

	for (int i = 0; i < 6; i++)
	{
		a[i].SetX(p.inputNumbers());
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
