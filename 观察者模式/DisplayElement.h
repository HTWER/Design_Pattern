#ifndef __DISPLAYELEMENT_H__
#define __DISPLAYELEMENT_H__

//�ӿ���,���ǲ�û�нӵ��κεĽӿ����棬Ҳ����˵��û�б��洢����
//�������ȫû�б�Ҫ
class DisplayElement
{
public:
	DisplayElement();
	~DisplayElement();

	//������ʾ
	virtual void display() = 0;
};

#endif