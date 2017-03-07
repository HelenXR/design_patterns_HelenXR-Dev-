#include "runner.h"
#include <iostream>
using namespace std;

Runner::Runner(string name,Marathon *marathon)
	:Person(name){
	marathon_ = marathon;
}

Runner::~Runner(){

}

void Runner::Run(){
	cout << this->GetName() << " " << "run in " << marathon_->GetName() << " marathon" << endl;
}