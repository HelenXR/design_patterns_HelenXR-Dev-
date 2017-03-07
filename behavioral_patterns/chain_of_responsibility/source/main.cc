/*
跑步俱乐部,有一个女孩来申请加入,这时候先把基本资料给队长,队长同意了在递交团长,团长同意了在递交给首领.
*/
#include "captain_handler.h"
#include "colonel_handler.h"
#include "chief_handler.h"
#include <windows.h>
int main(){
	Girl *xiaoli = new Girl("小丽",'A');
	Girl *xiaomei = new Girl("小美",'B');
	Girl *xiaoya = new Girl("小雅",'C');
	Girl *xiaohong = new Girl("小红",'D');

	Handler *captain_handler = new CaptainHandler("张队长");
	Handler *colonel_handler = new ColonelHandler("李团长");
	Handler *chief_handler = new ChiefHandler("王首领");
	
	colonel_handler->SetHandler(chief_handler);
	captain_handler->SetHandler(colonel_handler);

	captain_handler->Accept(xiaoli);
	captain_handler->Accept(xiaomei);
	captain_handler->Accept(xiaoya);
	captain_handler->Accept(xiaohong);

	//clear
	delete xiaoli;
	delete xiaomei;
	delete xiaoya;
	delete xiaohong;
	delete captain_handler;
	delete colonel_handler;
	delete chief_handler;
	system("Pause");
	return 0;
}
