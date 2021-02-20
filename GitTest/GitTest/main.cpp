#include"Person.h"
#include<iostream>
using namespace std;

int main()
{
	Person a;
	a.setName('B');
	cout << a.GetName() << endl;
	return 0;
}