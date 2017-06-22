#ifndef __COMMAND_H__
#define __COMMAND_H__

//抽象类可以用来代替一下java的接口
//类会默认加上默认构造函数和默认析构函数

//命令模式核心
//抽象类：仅用于设计阶段，在应用代码中不会用到;
//联系现实具体机器：一种预定以的规格（设定设备接口规格以及派生该规格设备）
class Command
{
public:
	virtual void execute() = 0;		//纯虚函数，子类写具体命令的地方,里面内容怎么写都可以
	virtual void undo() = 0;		//纯需函数，用于撤销命令，其实就是将execute中的逻辑反转过来执行
};

#endif