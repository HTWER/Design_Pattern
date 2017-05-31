#include <iostream>
#include "Singleton.h"
using namespace std;

int main()
{
	cout << hex << Singleton::getIntance() << endl;
	cout << hex << Singleton::getIntance() << endl;
	cout << Singleton::getIntance() << endl;


	cin.get();
	return 0;
}