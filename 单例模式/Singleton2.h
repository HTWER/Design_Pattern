#ifndef __SINGLETON2_H__
#define __SINGLETON2_H__

class Singleton2
{
private:
	static Singleton2 uniqueInstance;
	Singleton2(){};							//��Ĭ�Ϲ��췽����������
public:
	~Singleton2(){};

	//Ψһ���Ի�ȡʵ���ķ���
	//����Ϊ��̬�ģ��������κΰ����˸�ͷ�ļ��ĵط�ͨ����������
	static Singleton2 * getIntance();
};
#endif
