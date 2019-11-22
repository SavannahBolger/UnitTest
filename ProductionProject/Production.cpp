#include "Production.h"
#include <iostream>
using namespace std;

int Production::someMethod(int a)
{
	return a - a;
}

int Production::inputNumbers()
{
	cout << "input number: ";
	int x;
	cin >> x;
	return x;
}

int Production::checkNumbers(GameObject a[], int &i)
{
	if (a[i].GetX() == NULL)
	{
		cout << "incorrect info" << endl;
		i = 6;
		return 1;
	}
	else
	{
		cout << someMethod(a[i].GetX()) << endl;
		return someMethod(a[i].GetX());
	}
}

int Production::checkRange(GameObject a[], int &i)
{
	if ( a[i].GetX() < 1 || a[i].GetX() > 46 )
	{
		cout << "incorrect info" << endl;
		i = 6;
		return 1;
	}
	else
	{
		cout << someMethod(a[i].GetX()) << endl;
		return someMethod(a[i].GetX());
	}
}

int Production::checkRepeatNums(GameObject a[], int &i)
{
	for (int x = 0; x < 6; x++)
	{
		if (i != x && a[i].GetX() == a[x].GetX())
		{
			cout << "incorrect info" << endl;
			i = 6;
			x = 6;
			return 1;
		}
		else
		{
			cout << someMethod(a[x].GetX()) << endl;
			return someMethod(a[i].GetX());
		}
	}
}

int Production::checkNumbers(int a[], int& i)
{
	if (a[i] == NULL)
	{
		cout << "incorrect info" << endl;
		i = 6;
		return 1;
	}
	else
	{
		cout << someMethod(a[i]) << endl;
		return someMethod(a[i]);
	}
}

int Production::checkRange(int a[], int& i)
{
	if (a[i] < 1 || a[i] > 46)
	{
		cout << "incorrect info" << endl;
		i = 6;
		return 1;
	}
	else
	{
		cout << someMethod(a[i]) << endl;
		return someMethod(a[i]);
	}
}

int Production::checkRepeatNums(int a[], int& i)
{
	for (int x = 0; x < 6; x++)
	{
		if (i != x && a[i] == a[x])
		{
			cout << "incorrect info" << endl;
			i = 6;
			x = 6;
			return 1;
		}
		else
		{
			cout << someMethod(a[x]) << endl;
			return someMethod(a[i]);
		}
	}
}
