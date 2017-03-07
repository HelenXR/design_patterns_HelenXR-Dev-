#include "slow_run.h"
#include "fast_run.h"
#include <iostream>
using namespace std;
FastRun::FastRun(){

}

FastRun::~FastRun(){

}

void FastRun::Handle(Context *context){
	cout << "Fast run:4KM/M!" << endl;
	context->SetRun(new SlowRun());
}

