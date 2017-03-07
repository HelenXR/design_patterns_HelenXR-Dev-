#include "runner_people.h"
#include <iostream>
using namespace std;

RunnerPeople::RunnerPeople(string name)
	:People(name){

}

RunnerPeople::~RunnerPeople(){

}

void RunnerPeople::Update(string message){
	cout << "runner(" << this->GetName() << ") update message:" << message << endl;
}
