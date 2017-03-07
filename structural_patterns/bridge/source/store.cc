#include "store.h"
#include <iostream>
using namespace std;

Store::Store(Shoe * shoe){
	this->shoe_ = shoe;
}

Store::~Store(){

}

Shoe* Store::GetShoe(){
	return shoe_;
}

void Store::Selling(){
	cout << "Store Selling:not run here!" << endl;
}