#include "captain_handler.h"
#include "colonel_handler.h"
#include "chief_handler.h"
#include <windows.h>

/*
design_pattern:"chain_of_responsibility"
Running club, there is a girl to apply to join, the basic information sends to the captain, 
the captain agreed ,then submit to the colonel, 
the colonel agreed ,then submit to the chief,
if chief agrees,join the girl;
*/
int main(){
	Girl *xiaoli = new Girl("xiaoli",'A');
	Girl *xiaomei = new Girl("xiaomei",'B');
	Girl *xiaoya = new Girl("xiaoya",'C');
	Girl *xiaohong = new Girl("xiaohong",'D');

	Handler *captain_handler = new CaptainHandler("captain_tom");
	Handler *colonel_handler = new ColonelHandler("colone_jack");
	Handler *chief_handler = new ChiefHandler("chief_jone");
	
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
