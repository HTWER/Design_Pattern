#ifndef __IBEATOBSERVER_H__
#define __IBEATOBSERVER_H__

//�������IBPMObserver�����һ�����߼��ĳ����ֻ࣬��һ��update���ֵ����������
//��������ʵ����������࣬ʵ��ʱ��Ҫ�Ӷ�һ����Ա��������¼��˭�ڹ۲졣��Ϊһ��������֮����Ҫ��۲��߽��н�����
//Ȼ����view�а������������ʵ��...
class IBeatObserver
{
public:
	virtual void updateBeat() = 0;
};

#endif