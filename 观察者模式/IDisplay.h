#ifndef __IDISPLAY_H__
#define __IDISPLAY_H__

class IDisplay
{
public:
	virtual ~IDisplay();

	virtual void display() = 0;
};

#endif