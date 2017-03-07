#include "runner_proxy.h"
#include <iostream>
using namespace std;

RunnerProxy::RunnerProxy(string name,Marathon *marathon)
:Person(name){
	marathon_ = marathon;
}

RunnerProxy::~RunnerProxy(){

}

void RunnerProxy::SetRunner(Runner *runner){
	runner_ = runner;
}

void RunnerProxy::Run(){
	runner_->Run();
	//cout << this->GetName() << "(proxy:" << runner_->GetName() << ") " << "run in " << marathon_->GetName() << "marathon" << endl; 
}