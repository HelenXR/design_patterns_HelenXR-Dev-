/*
ÿ�����Ŷ����Լ����ŷ�.ÿ���·�������һ������,��ô�����ŷ�չ��10����ʱ,����10�������,������Ԫģʽ����ֻ�н�ʡ�ܶ��ڴ���Դ
�·�����:M,L,XL,XXL.
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