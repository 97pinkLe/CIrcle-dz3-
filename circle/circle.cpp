#include <windows.h>
#include "Header.h"

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	circle a;
	a.setRadius(4);
	cout << a.getRadius() << endl;
	cout << a.getArea() << endl;
	cout << a.getLength() << endl;
}