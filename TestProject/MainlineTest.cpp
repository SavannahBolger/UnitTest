#include <iostream>
#include <assert.h>

#include "../ProductionProject/Production.h"
#include "../ProductionProject/GameObject.h"
#include "../ProductionProject/Mainline.cpp"

using namespace std;

int main()
{
	Production p;
	int a[] = { 1,2,3,4,5,6,7 };

	for (int i = 0; i < sizeof(a); i++)
	{
		cout << p.someMethod(a[i]) << endl;
		assert(p.checkNumbers(a, i) == 0);
		assert(p.checkRange(a, i) == 0);
		assert(p.checkRepeatNums(a, i) == 0);
	}
	cin.get();
}