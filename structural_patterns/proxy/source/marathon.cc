#include "marathon.h"

Marathon::Marathon(string name){
	name_ = name;
}

Marathon::~Marathon(){

}

string Marathon::GetName(){
	return name_;
}