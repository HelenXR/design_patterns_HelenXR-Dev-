#include "context.h"

Context::Context(Run * run){
	run_ = run;
}

Context::~Context(){
	delete run_;
}

void Context::SetRun(Run * run){
	run_ = run;
}

void Context::Training(){
	old_run_ = run_;
	run_->Handle(this);
	delete old_run_;
}