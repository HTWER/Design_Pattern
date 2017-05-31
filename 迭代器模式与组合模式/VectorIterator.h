#ifndef __VECTORITERATOR_H__
#define __VECTORITERATOR_H__

//���ڱ� ���κ�����vector ��ͨ�õ�����
//��ʵvector�����е��������������ڲ����ã������ֶ�Ϊvectorд��������

#include <vector>
#include "Iterator.h"
using namespace std;

//�����ֻ�Ǽ򵥵ؽ�vector��װ��һ�£�ֻ�ܱ�����ǰ�ۺϵ�Ԫ��

template <class DataType>
class VectorIterator : public Iterator
{
public:
	VectorIterator(vector<DataType>* items)
	{
		this->items = items;
	}

	//����汾�����ⲿʹ��������͸�������Ƕ��̰߳�ȫ
// 	void* next() override
// 	{
// 		vector<DataType>::iterator iter = items->begin() + position;			//ȡ�õ�������ֻ�е���������׼ȷ��λvector���ڲ�Ԫ��
// 		position++;
// 
// 		vector<DataType>::iterator* temp = new vector<DataType>::iterator();	//����һ���յĵ�����,new��һ���̶��ڴ�
// 		*temp = iter;															//�ڹ̶��ڴ��з��������
// 		return temp;	//���ع̶��ڴ�ָ��,�������Ļ����ͷŵĹ����ͽ����˵��������������;����Ҫ*���βŵõ�������Ԫ��
// 	}

	//����汾�ڶ��߳��в���ȫ�������ⲿʹ������͸��
	void* next() override
	{
		DataType* data = &(*items)[position];
		position++;

		return data;
	}

	bool hasNext() override
	{
		if (position <= items->size() - 1)
			return true;

		return false;
	}

private:
	vector<DataType>* items;
	int position = 0;

};

#endif