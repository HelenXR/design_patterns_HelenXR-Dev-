/*
以生产手机为例,现在手机厂商喜欢同时推出高端、中端、低端配置版本,它们的基本配置大多一样,只有几个关键零件不同,这里就很适合使用Builder模式
高端手机:835处理器,5.5寸屏,8G内存
中端手机:820处理器,4.7寸屏,4G内存
低端手机:810处理器,4.0寸屏,2G内存
*/
#include "builder.h"
#include "high_phone_builder.h"
#include "normal_phone_builder.h"
#include "low_phone_builder.h"
#include "director.h"
#include "phone.h"
#include <windows.h>
#include <iostream>

void main(){
	//创建指挥者
	Director *director = new Director();

	Builder *high_builder = new HighPhoneBuilder();
	director->SetBuilder(high_builder);
	//生产高端手机
	Phone *high_phone = director->AssemblePhone();
	high_phone->ShowConfig();
	
	Builder *normal_builder = new NormalPhoneBuilder();
	director->SetBuilder(normal_builder);
	
	//生产中端手机
	Phone *normal_phone = director->AssemblePhone();
	normal_phone->ShowConfig();
	
	Builder *low_builder = new LowPhoneBuilder();
	director->SetBuilder(low_builder);
	//生产低端手机
	Phone *low_phone = director->AssemblePhone();
	low_phone->ShowConfig();

	//clear
	delete high_builder;
	delete normal_builder;
	delete low_builder;
	delete director;
	cout << "ending!" << endl;
	system("Pause");
}
