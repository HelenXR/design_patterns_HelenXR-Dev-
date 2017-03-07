#include "decorator.h"

Decorator::Decorator(Runner * runner){
	runner_ = runner;
}

Decorator::~Decorator(){

}

void Decorator::Show(){
	runner_->Show();
}