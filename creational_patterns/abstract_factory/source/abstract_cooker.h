#ifndef HELENDP_SOURCE_ABSTRACT_COOKER_H_
#define HELENDP_SOURCE_ABSTRACT_COOKER_H_

class AbstractCooker
{
public:
	AbstractCooker();
	virtual ~AbstractCooker();
	//�緹�ҵ���Ҫ����:��
	virtual void Cooking() = 0;
};
#endif
