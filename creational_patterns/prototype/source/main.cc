/*
比如公司给员工配电脑
助理的电脑配置:i5 19寸显示器 双飞燕键盘,用着还不错.
软件工程师说我要跟助理一样的配置,把键盘换成cherry的就可以了.
*/
#include <windows.h>
#include "software_computer.h"

int main(){
	AssistantComputer *assistant_computer = new SoftwareComputer();
	assistant_computer->ShowConfig();
	AssistantComputer *software_computer = assistant_computer->clone();
	software_computer->ShowConfig();
	/*
	assistant_computer->SetDisplay("32inch");
	AssistantComputer *software_computer2 = assistant_computer->clone();
	software_computer2->ShowConfig();
	*/

	//clear
	delete assistant_computer;
	delete software_computer;
	system("Pause");
	return 0;
}
