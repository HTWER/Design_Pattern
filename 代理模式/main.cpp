#include "ImageProxy.h"
#include "PersonBeanImpl.h"
#include "OwnerProxy.h"

#include <windows.h>

int main()
{
#if 0
	ImageProxy* imageProxy = new ImageProxy("127.0.0.1/xxx.png");

	cout << imageProxy->getWidth() << endl;
	cout << imageProxy->getHeight() << endl;
	imageProxy->paint();
	cout << imageProxy->getWidth() << endl;
	cout << imageProxy->getHeight() << endl;
	imageProxy->paint();

	Sleep(4000);
	cout << imageProxy->getWidth() << endl;
	cout << imageProxy->getHeight() << endl;
#else
	PersonBeanImpl* realPersonBean = new PersonBeanImpl();
	PersonBean* personBean1 = PersonBean::Create("Owner", realPersonBean);
	personBean1->setName("wht");
	cout << personBean1->getName().c_str() << endl;
#endif

	cin.get();
	return 0;
}