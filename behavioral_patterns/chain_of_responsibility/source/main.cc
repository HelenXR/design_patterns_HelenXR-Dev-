/*
�ܲ����ֲ�,��һ��Ů�����������,��ʱ���Ȱѻ������ϸ��ӳ�,�ӳ�ͬ�����ڵݽ��ų�,�ų�ͬ�����ڵݽ�������.
*/
#include "captain_handler.h"
#include "colonel_handler.h"
#include "chief_handler.h"
#include <windows.h>
int main(){
	Girl *xiaoli = new Girl("С��",'A');
	Girl *xiaomei = new Girl("С��",'B');
	Girl *xiaoya = new Girl("С��",'C');
	Girl *xiaohong = new Girl("С��",'D');

	Handler *captain_handler = new CaptainHandler("�Ŷӳ�");
	Handler *colonel_handler = new ColonelHandler("���ų�");
	Handler *chief_handler = new ChiefHandler("������");
	
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
