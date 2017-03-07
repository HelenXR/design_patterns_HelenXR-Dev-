#include <windows.h>
#include "simple_factory.h"

int main(){
	SimpleFactory *simple_factory = new SimpleFactory();
	Watch *apple_watch = simple_factory->CreateWatch(APPLE_TYPE);
	Watch *huawei_watch = simple_factory->CreateWatch(HUAWEI_TYPE);
	apple_watch->ShowInformation();
	huawei_watch->ShowInformation();

	//clear
	delete simple_factory;
	delete apple_watch;
	delete huawei_watch;
	system("Pause");
	return 0;
}
