/*
���繫˾��Ա�������
����ĵ�������:i5 19����ʾ�� ˫�������,���Ż�����.
�������ʦ˵��Ҫ������һ��������,�Ѽ��̻���cherry�ľͿ�����.
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
