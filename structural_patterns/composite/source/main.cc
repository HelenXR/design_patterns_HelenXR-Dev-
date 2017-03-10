#include <windows.h>
#include "shop_saler.h"
#include "shop_keeper.h"
#include <iostream>
using namespace std;

/*
design_pattern:"compositor"
		总 店 长(A)
		/    |    \
   		B	C    D
   		      	    /	  \
   			  E 	    F
   				   / \ 
   				 G 	H
A:深圳总店长(熊总)   							
B:总店店员(李一)   							
C:总店店员(王二)
D:宝安区店长(张三)
E:宝安区店员(李四)
F:宝安区西乡街道店长(刘五)
G:西乡街道店员(陈六)
H:西乡街道店员(方七)
*/
int main(){
	Employee *shop_keeper_A = new ShopKeeper("深圳总店长(熊总)",40,10000);
	Employee *shop_saler_B = new ShopSaler("总店店员(李一)",18,6000);
	Employee *shop_saler_C = new ShopSaler("总店店员(王二)",19,5500);
	Employee *shop_keeper_D = new ShopKeeper("宝安区店长(张三)",35,8000);
	Employee *shop_saler_E = new ShopSaler("宝安区店员(李四)",20,5000);
	Employee *shop_keeper_F = new ShopKeeper("宝安区西乡街道店长(刘五)",33,7000);
	Employee *shop_saler_G = new ShopSaler("西乡街道店员(陈六)",21,4500);
	Employee *shop_saler_H = new ShopSaler("西乡街道店员(方七)",22,4000);

	//From bottom to top
	shop_keeper_F->Add(shop_saler_G);
	shop_keeper_F->Add(shop_saler_H);
	shop_keeper_D->Add(shop_saler_E);
	shop_keeper_D->Add(shop_keeper_F);
	shop_keeper_A->Add(shop_saler_B);
	shop_keeper_A->Add(shop_saler_C);
	shop_keeper_A->Add(shop_keeper_D);
	shop_keeper_A->ShowInformation();

	//clear
	delete shop_keeper_A;
	delete shop_saler_B;
	delete shop_saler_C;
	delete shop_keeper_D;
	delete shop_saler_E;
	delete shop_keeper_F;
	delete shop_saler_G;
	delete shop_saler_H;
	system("Pause");
	return 0;
}