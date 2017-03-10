#include "shop_keeper.h"
#include <iostream>
using namespace std;

ShopKeeper::ShopKeeper(string name,int age,int salary) : Employee(name,age,salary){
}

ShopKeeper::~ShopKeeper(){

}

void ShopKeeper::Add(Employee *employee){
	list_employee_.push_back(employee);
}

void ShopKeeper::ShowInformation(){
	cout << this->GetName() << "," << this->GetAge() << "," << this->GetSalary() << endl;
	for(list<Employee *>::iterator v = list_employee_.begin();v != list_employee_.end();v++){
		(*v)->ShowInformation();
	}
}
