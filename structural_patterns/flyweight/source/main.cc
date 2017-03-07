/*
每个跑团都有自己的团服.每件衣服都申请一个对象,那么当跑团发展到10万人时,就有10万个对象,利用享元模式可以只有节省很多内存资源
衣服尺码:M,L,XL,XXL.
*/
#include "clothes_factory.h"
#include <stdio.h>
using namespace std;

int main(){
	ClothesFactory *clothes_factory = new ClothesFactory();
	clothes_factory->GetClothes('M');
	clothes_factory->GetClothes('L');
	clothes_factory->GetClothes('XL');
	Clothes *clothes_first = clothes_factory->GetClothes('XXL');
	Clothes *clothes_second = clothes_factory->GetClothes('XXL');
	//check
	printf("%p,%p\n", clothes_first, clothes_second);
	system("Pause");
	return 0;
}