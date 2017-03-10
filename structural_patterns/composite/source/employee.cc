#include "employee.h"
#include <iostream>
using namespace std;

Employee::Employee(string name,int age,int salary){
	name_ = name;
	age_ = age;
	salary_ = salary;
}

Employee::~Employee(){

}

void Employee::Add(Employee * employee){
	cout << "Employee::Add: will not run here" << endl;
}

void Employee::ShowInformation(){
	cout << "Employee::ShowInformation: will not run here" << endl;
}
string Employee::GetName(){
	return name_;
}

int Employee::GetAge(){
	return age_;
}

int Employee::GetSalary(){
	return salary_;
}