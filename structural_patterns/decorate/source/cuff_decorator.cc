#include "cuff_decorator.h"
#include <iostream>
using namespace std;

CuffDecorator::CuffDecorator(Runner * runner) : Decorator(runner){

}

CuffDecorator::~CuffDecorator(){

}

void CuffDecorator::CuffShow(){
	cout << "I have cuff!" << endl;
}

void CuffDecorator::Show(){
	Decorator::Show();
	CuffShow();
}

