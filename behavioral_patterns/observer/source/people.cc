#include "people.h"

People::People(string name){
	name_ = name;
}

People::~People(){

}

void People::Update(string message){
	
}

void People::SetName(string name){
	name_ = name;
}

string People::GetName(){
	return name_;
}