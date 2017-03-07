#include "shop_saler.h"
#include <iostream>
using namespace std;

ShopSaler::ShopSaler(string name,int age,int salary):Employee(name,age,salary){

}

ShopSaler::~ShopSaler(){

}

void ShopSaler::Add(Employee *employee){
	cout << "ShopSaler::Add: will not run here" << endl;
}

void ShopSaler::ShowInformation(){
	cout << this->GetName() << "," << this->GetAge() << "," << this->GetSalary() << endl;
}