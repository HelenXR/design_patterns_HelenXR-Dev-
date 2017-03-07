/*
跑步的时候大家都会带一些修饰效果的装备,如头带,护腕.
*/
#include "Headband_decorator.h"
#include "cuff_decorator.h"
#include "cool_runner.h"
#include <windows.h>

int main(){
	Runner *runner = new CoolRunner();
	Runner *cuff_decorator = new CuffDecorator(runner);
	Runner *headband_decorator = new HeadbandDecorator(cuff_decorator);
	headband_decorator->Show();
	system("Pause");
	return 0;
}