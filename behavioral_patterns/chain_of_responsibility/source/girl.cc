#include "girl.h"

Girl::Girl(string name,int size){
	name_ = name;
	size_ = size;
}

Girl::~Girl(){

}

string Girl::GetName(){
	return name_;
}

int Girl::GetSize(){
	return size_;
}