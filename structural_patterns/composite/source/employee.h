#ifndef HELENDP_SOURCE_EMPLOYEE_H_
#define HELENDP_SOURCE_EMPLOYEE_H_
#include <string>
using namespace std;

class Employee{
public:
	Employee(string name,int age,int salary);
	virtual ~Employee();
	string GetName();
	virtual void Add(Employee *employee);
	int GetAge();
	int GetSalary();
	virtual void ShowInformation();
private:
	string name_;
	int age_;
	int salary_;
};
#endif
