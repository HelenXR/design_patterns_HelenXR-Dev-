/*
design_patterns:"builder"
In the production of mobile phones, for example, now the mobile phone manufacturers will launch high-end, midrange, 
low-end configuration version, the basic configuration of most of them, only a few key parts are different, it is very suitable 
for the use of Builder mode

high-end :835 Processor,5.5 inch Panel,8G Memory.
midrange :820 Processor,4.7 inch Panel,4G Memory.
low-end  :810 Processor,4.0 inch Panel,2G Memory.
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
	//create director
	Director *director = new Director();

	Builder *high_builder = new HighPhoneBuilder();
	director->SetBuilder(high_builder);
	//create high-end phone
	Phone *high_phone = director->AssemblePhone();
	high_phone->ShowConfig();
	
	Builder *normal_builder = new NormalPhoneBuilder();
	director->SetBuilder(normal_builder);
	
	//create midrange phone
	Phone *normal_phone = director->AssemblePhone();
	normal_phone->ShowConfig();
	
	Builder *low_builder = new LowPhoneBuilder();
	director->SetBuilder(low_builder);
	//create low-end phone
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
