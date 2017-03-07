#ifndef HELENDP_SOURCE_SHOP_SALER_H_
#define HELENDP_SOURCE_SHOP_SALER_H_
#include "employee.h"

class ShopSaler : public Employee{
public:
	ShopSaler(string name,int age,int salary);
	~ShopSaler();
	void Add(Employee *employee);
	void ShowInformation();
};
#endif