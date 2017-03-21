#include "fast_run.h"
#include "middle_run.h"
#include <iostream>
using namespace std;
MiddleRun::MiddleRun(){

}

MiddleRun::~MiddleRun(){

}

void MiddleRun::Handle(Context *context){
	cout << "middle run:5KM/M!" << endl;
	context->SetRun(new FastRun());
}
