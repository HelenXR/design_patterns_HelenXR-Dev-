#ifndef HELENDP_SOURCE_SHOP_KEEPER_H_
#define HELENDP_SOURCE_SHOP_KEEPER_H_
#include "employee.h"
#include <list>
using namespace std;

class ShopKeeper : public Employee{
public:
	ShopKeeper(string name,int age,int salary);
	~ShopKeeper();
	void Add(Employee *employee);
	void ShowInformation();
private:
	list<Employee *> list_employee_;
};
#endif