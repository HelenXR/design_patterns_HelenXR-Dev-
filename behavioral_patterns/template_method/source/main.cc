/*
������Ҫ�Զ��ѧԱ�����ܽ��в���,��������:
1.5������Ӿ
40�������г�
10�����ܲ�
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