#ifndef __DISPLAYELEMENT_H__
#define __DISPLAYELEMENT_H__

//接口类,但是并没有接到任何的接口上面，也就是说它没有被存储起来
//这个类完全没有必要
class DisplayElement
{
public:
	DisplayElement();
	~DisplayElement();

	//用来显示
	virtual void display() = 0;
};

#endif