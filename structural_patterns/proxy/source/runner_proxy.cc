#include "runner_proxy.h"
#include <iostream>
using namespace std;

RunnerProxy::RunnerProxy(string name)
:Person(name){
}

RunnerProxy::~RunnerProxy(){

}

void RunnerProxy::SetRunner(Runner *runner){
	runner_ = runner;
}

void RunnerProxy::Run(){
	runner_->Run();
}