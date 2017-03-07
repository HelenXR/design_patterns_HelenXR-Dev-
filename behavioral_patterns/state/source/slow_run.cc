#include "slow_run.h"
#include "middle_run.h"
#include <iostream>
using namespace std;
SlowRun::SlowRun(){

}

SlowRun::~SlowRun(){

}

void SlowRun::Handle(Context *context){
	cout << "slow run:6KM/M!" << endl;
	context->SetRun(new MiddleRun());
}