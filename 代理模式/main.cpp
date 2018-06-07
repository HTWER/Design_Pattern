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

	IPersonBean* personBeanProxy1 = IPersonBean::Create("Owner", realPersonBean);
	personBeanProxy1->setName("wht");
	personBeanProxy1->setGender("man");
	personBeanProxy1->setInterests("play computer game");
	//personBeanProxy1->setHotOrNotRating(10);
	cout << personBeanProxy1->getName().c_str() << endl;
	cout << personBeanProxy1->getGender().c_str() << endl;
	cout << personBeanProxy1->getInterests().c_str() << endl;
	cout << personBeanProxy1->getHotOrNotRating() << endl;

	IPersonBean* personBeanProxy2 = IPersonBean::Create("NonOwner", realPersonBean);
	//personBeanProxy2->setName("wht");
	//personBeanProxy2->setGender("man");
	//personBeanProxy2->setInterests("play computer game");
	personBeanProxy2->setHotOrNotRating(8);
	cout << personBeanProxy2->getName().c_str() << endl;
	cout << personBeanProxy2->getGender().c_str() << endl;
	cout << personBeanProxy2->getInterests().c_str() << endl;
	cout << personBeanProxy2->getHotOrNotRating() << endl;
#endif

	cin.get();
	delete personBeanProxy1;
	delete personBeanProxy2;
	delete realPersonBean;
	return 0;
}