#include <windows.h>
#include "zhangsan_runner.h"
#include "lisi_runner.h"

/*
design_pattern:"template_method"
The team needs to test the physical ability of the students,the exam contain 3 items:
swimming
bike
running
*/
int main(){
	Runner *zhangsan = new ZhangsanRunner();
	Runner *lisi = new LisiRunner();
	zhangsan->Exam();
	lisi->Exam();

	//clear
	delete zhangsan;
	delete lisi;
	system("Pause");
	return 0;
}