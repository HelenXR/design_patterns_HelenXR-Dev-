/*
中介模式:
想到中介立刻就想到2016最火的楼市了.
买房者和卖房者都要通过中介来促成交易.而买房者和卖房者 签订合同签是互相都不知道对方的,只有中介知道双方的信息, 买方和卖方不需要知道对方通过中介沟通.
这里需要解决一下2个类互相包含的问题:
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
	seller->Say("有房出售,5万一平");
	buyer->Say("想买房,总价100万以内");

	//clear
	delete hourse_mediator;
	delete seller;
	delete buyer;
	system("Pause");
	return 0;
	}