#include "headband_decorator.h"
#include <iostream>
using namespace std;

HeadbandDecorator::HeadbandDecorator(Runner * runner) : Decorator(runner){

}

HeadbandDecorator::~HeadbandDecorator(){

}

void HeadbandDecorator::HeadbandShow(){
	cout << "I have headband!" << endl;
}

void HeadbandDecorator::Show(){
	Decorator::Show();
	HeadbandShow();
}