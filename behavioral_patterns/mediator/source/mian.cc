/*
�н�ģʽ:
�뵽�н����̾��뵽2016����¥����.
���ߺ������߶�Ҫͨ���н����ٳɽ���.�����ߺ������� ǩ����ͬǩ�ǻ��඼��֪���Է���,ֻ���н�֪��˫������Ϣ, �򷽺���������Ҫ֪���Է�ͨ���н鹵ͨ.
������Ҫ���һ��2���໥�����������:
http://www.cnblogs.com/hanxi/archive/2012/07/25/2608068.html
*/
#include "seller_people.h"
#include "buyer_people.h"
#include "hourse_mediator.h"
#include <windows.h>
int main(){
	HourseMediator *hourse_mediator = new HourseMediator();
	SellerPeole *seller = new SellerPeole(hourse_mediator);
	BuyerPeole *buyer = new BuyerPeole(hourse_mediator);
	hourse_mediator->SetBuyer(buyer);
	hourse_mediator->SetSeller(seller);
	seller->Say("�з�����,5��һƽ");
	buyer->Say("����,�ܼ�100������");

	//clear
	delete hourse_mediator;
	delete seller;
	delete buyer;
	system("Pause");
	return 0;
	}