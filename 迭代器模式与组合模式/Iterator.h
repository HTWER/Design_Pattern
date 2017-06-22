#ifndef __ITERATOR_H__
#define __ITERATOR_H__

//迭代器的任务只是遍历集合中所有的元素，而不用暴露集合的表示，集合的元素可以是无序的

class Iterator
{
public:
	virtual ~Iterator(){};

	virtual bool hasNext() = 0;
	virtual void* next() = 0;		//注意：迭代器应该可以直接访问聚合的元素，所以这里返回的是指针，而不是value
};

#endif