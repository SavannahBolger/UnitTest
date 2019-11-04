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
	int x;

	for (int i = 0; i < 6; i++)
	{
		cin >> x;
		a[i] = x;
	}
	for (int i = 0; i < 6; i++)
	{
		for (int x = 0; x < 6; x++)
		{
			if((i != x && a[i] == a[x]) || a[i] < 1 || a[i] > 46 || a[i] == NULL)
			{
				cout << "incorrect info" << endl;
				i = 6;
				x = 6;
				break;
			}
			else
			{
				cout << p.someMethod(a[x]) << endl;
				assert(p.someMethod(a[x]) == 0);
			}
		}
	}
//	assert(p.someMethod(a) == 1);
	cin.get();
	system("pause");
	return 0;
}
