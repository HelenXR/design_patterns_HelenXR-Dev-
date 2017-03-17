#include "runner.h"
#include <iostream>
using namespace std;

Runner::Runner(string name)
	:Person(name){
}

Runner::~Runner(){

}

void Runner::Run(){
	cout << this->GetName() << " " << "run in xiamen marathon" << endl;
}