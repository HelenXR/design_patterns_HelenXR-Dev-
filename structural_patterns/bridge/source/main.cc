/*
优点:
1.抽象和实现分离
2.解决多重继承问题
场景:
专卖店卖鞋子,卖asics和nike跑鞋
*/
#include <windows.h>
#include "nike_shoe.h"
#include "asics_shoe.h"
#include "helen_store.h"


int main(){
	Shoe* asics_shoe = new AsicsShoe();
	Shoe* nike_shoe = new NikeShoe();
	Store* helen_store = new HelenStore(asics_shoe);
	helen_store->Selling();
	Store* helen_store_2 = new HelenStore(nike_shoe);
	helen_store_2->Selling();
	
	//clear
	delete asics_shoe;
	delete nike_shoe;
	delete helen_store;
	delete helen_store_2;
	system("Pause");
	return 0;
}
