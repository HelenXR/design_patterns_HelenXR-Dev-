#include "runner_club.h"
#include <iostream>
using namespace std;

RunnerClub::RunnerClub(){

}

RunnerClub::~RunnerClub(){

}

void RunnerClub::RunnerGroupActivity(){
	PropagateSystem *propagate_system = new PropagateSystem();
	RegistrationSystem *registration_system = new RegistrationSystem();
	ActivitySystem *activity_system = new ActivitySystem();
	FinanceSystem *finance_system = new FinanceSystem();

	cout << "长跑俱乐部组织一个活动:" << endl; 
	propagate_system->Dopublicity();
	registration_system->DoRegistation();
	activity_system->DoActivity();
	finance_system->FinancialSettle();

	delete propagate_system;
	delete registration_system;
	delete activity_system;
	delete finance_system;
}