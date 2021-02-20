#include"Person.h"
#include<iostream>
using namespace std;

int main()
{
	int v1 = 100;
	int v3 = 80;
	//*(int *)(v1 + 412) = v3;

	Person a;
	a.setName('B');
	cout << a.GetName() << endl;
	a.setName('h');
	cout << a.GetName() << endl;
	return 0;
}