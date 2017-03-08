#include "nike_factory.h"
#include "asics_factory.h"
#include "nike_running_shoe.h"
#include "asics_running_shoe.h"
#include <windows.h>
/*
design_pattern:factory_method
*/
int main(){
	Factory *nike_factory = new NikeFactory();
	Factory *asics_factory = new AsicsFactory();
	RunningShoe *nike_running_shoe = nike_factory->CreateRunningShoe();
	RunningShoe *asics_running_shoe = asics_factory->CreateRunningShoe();
	nike_running_shoe->run();
	asics_running_shoe->run();
	
	//clear
	delete nike_factory;
	delete asics_factory;
	delete nike_running_shoe;
	delete asics_running_shoe;
	system("Pause");
	return 0;
}
