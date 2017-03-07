/*
�������ֻ�Ϊ��,�����ֻ�����ϲ��ͬʱ�Ƴ��߶ˡ��жˡ��Ͷ����ð汾,���ǵĻ������ô��һ��,ֻ�м����ؼ������ͬ,����ͺ��ʺ�ʹ��Builderģʽ
�߶��ֻ�:835������,5.5����,8G�ڴ�
�ж��ֻ�:820������,4.7����,4G�ڴ�
�Ͷ��ֻ�:810������,4.0����,2G�ڴ�
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
	//����ָ����
	Director *director = new Director();

	Builder *high_builder = new HighPhoneBuilder();
	director->SetBuilder(high_builder);
	//�����߶��ֻ�
	Phone *high_phone = director->AssemblePhone();
	high_phone->ShowConfig();
	
	Builder *normal_builder = new NormalPhoneBuilder();
	director->SetBuilder(normal_builder);
	
	//�����ж��ֻ�
	Phone *normal_phone = director->AssemblePhone();
	normal_phone->ShowConfig();
	
	Builder *low_builder = new LowPhoneBuilder();
	director->SetBuilder(low_builder);
	//�����Ͷ��ֻ�
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
