#include "seller_people.h"
#include "buyer_people.h"
#include "hourse_mediator.h"
#include <windows.h>

/*
design_pattern:"mediator"
2016 most of the fire is not the real estate.
Buyers and sellers should be through an intermediary to facilitate transactions, 
buyers and sellers to sign the contract is do not even know each other, 
only know intermediary information both the buyer and the seller 
does not need to know each other through the intermediary of communication.
*/
int main(){
	HourseMediator *hourse_mediator = new HourseMediator();
	SellerPeole *seller = new SellerPeole(hourse_mediator);
	BuyerPeole *buyer = new BuyerPeole(hourse_mediator);
	hourse_mediator->SetBuyer(buyer);
	hourse_mediator->SetSeller(seller);
	seller->Say("There is room for sale, 50000гд per square meter");
	buyer->Say("I want to buy a house, the total price of 3000000");

	//clear
	delete hourse_mediator;
	delete seller;
	delete buyer;
	system("Pause");
	return 0;
}