#include <iostream>
using namespace std;
void Function1(int& x)
{
	x++;
}
int main()
{
	int a = 10;

	cout << "Value of a = " << a << endl;
	cout << "Address/Reference of a = " << &a << endl;

	Function1(a);
	cout << "\n a after calling function1 = " << a << endl;

	return 0;
}