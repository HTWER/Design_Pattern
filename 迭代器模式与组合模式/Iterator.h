#ifndef __ITERATOR_H__
#define __ITERATOR_H__

//������������ֻ�Ǳ������������е�Ԫ�أ������ñ�¶���ϵı�ʾ�����ϵ�Ԫ�ؿ����������

class Iterator
{
public:
	virtual ~Iterator(){};

	virtual bool hasNext() = 0;
	virtual void* next() = 0;		//ע�⣺������Ӧ�ÿ���ֱ�ӷ��ʾۺϵ�Ԫ�أ��������ﷵ�ص���ָ�룬������value
};

#endif