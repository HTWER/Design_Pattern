#include <iostream>
#include "Singleton.h"
#include "Singleton2.h"
using namespace std;

int main()
{
	cout << hex << Singleton::getIntance() << endl;
	cout << hex << Singleton::getIntance() << endl;
	cout << Singleton::getIntance() << endl;

	cout << hex << Singleton2::getIntance() << endl;
	cout << hex << Singleton2::getIntance() << endl;
	cout << Singleton2::getIntance() << endl;

	cin.get();
	return 0;
}