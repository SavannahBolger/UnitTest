#include <iostream>
#include <assert.h>

#include "../ProductionProject/Production.h"
#include "../ProductionProject/GameObject.h"
#include "../ProductionProject/Mainline.cpp"

using namespace std;

int main()
{
	Production p;
	GameObject a[6];

	for (int i = 0; i < 6; i++)
	{
		a[i].SetX(p.inputNumbers());
	}
	for (int i = 0; i < 6; i++)
	{
		cout << p.someMethod(a[i].GetX()) << endl;
		assert(p.checkNumbers(a, i) == 0);
		assert(p.checkRange(a, i) == 0);
		assert(p.checkRepeatNums(a, i) == 0);
	}
	cin.get();
}