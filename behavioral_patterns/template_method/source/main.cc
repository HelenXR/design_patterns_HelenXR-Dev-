/*
跑团需要对多个学员的体能进行测试,测试内容:
1.5公里游泳
40公里自行车
10公里跑步
*/
#include <windows.h>
#include "zhangsan_runner.h"
#include "lisi_runner.h"

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