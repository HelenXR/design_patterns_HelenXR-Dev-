#include "person.h"

Person::Person(string name){
	name_ = name;
}

Person::~Person(){

}

void Person::Run(){

}

string Person::GetName(){
	return name_;
}