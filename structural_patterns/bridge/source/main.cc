/*
�ŵ�:
1.�����ʵ�ַ���
2.������ؼ̳�����
����:
ר������Ь��,��asics��nike��Ь
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
