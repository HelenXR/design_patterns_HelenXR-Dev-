#include "singleton.h"
#include <iostream>
using namespace std;
#include <stdio.h>

//static member need to define for allocated memory , otherwise will cause compile error!
Singleton * Singleton::singleton_ = NULL;
Singleton::Singleton(){
	cout << "Singleton construct!" << endl;
}

Singleton::~Singleton(){
	cout << "Singleton destruct!" << endl;
}

Singleton* Singleton::GetInstance(){
	if(NULL == singleton_){
		singleton_ = new Singleton();
	}
	return singleton_;
}