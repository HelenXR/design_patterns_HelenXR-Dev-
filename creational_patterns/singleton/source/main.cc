#include "singleton.h"
#include <iostream>
#include <windows.h>
#include <stdio.h>
using namespace std;

int main(){
	//this will cause compile error,because singleton construct is private!
	//Singleton *singleton = new singleton();
	Singleton *singleton_p1 = Singleton::GetInstance();
	Singleton *singleton_p2 = Singleton::GetInstance();
	printf("singleton_p1:%p\nsingleton_p2:%p\nsingletons are the same!\n",singleton_p1,singleton_p2);
	//clear
	delete singleton_p1;
	system("Pause");
	return 0;
}
