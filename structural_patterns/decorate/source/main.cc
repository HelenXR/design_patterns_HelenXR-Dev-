#include "Headband_decorator.h"
#include "cuff_decorator.h"
#include "cool_runner.h"
#include <windows.h>

/*
design_pattern:"decorate"
When running, everyone will bring some of the effects of the equipment, such as headband, cuff...
*/
int main(){
	Runner *runner = new CoolRunner();
	Runner *cuff_decorator = new CuffDecorator(runner);
	Runner *headband_decorator = new HeadbandDecorator(cuff_decorator);
	headband_decorator->Show();
	system("Pause");
	return 0;
}