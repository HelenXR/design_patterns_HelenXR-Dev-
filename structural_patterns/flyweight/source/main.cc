#include "clothes_factory.h"
#include "leading_runner_clothes.h"
#include <stdio.h>
using namespace std;

/*
design_pattern:"flyweight"
Each runner club has its own clothes. Each piece of clothing for an object, 
then when the group ran to 100 thousand people, there are 100 thousand objects,
the flyweight pattern can only save a lot of memory resources.
The leading runner of the clothes have their own names, ordinary members of the clothes only the size difference.
*/
int main(){
	ClothesFactory *clothes_factory = new ClothesFactory();
	clothes_factory->GetClothes('S');
	clothes_factory->GetClothes('M');
	clothes_factory->GetClothes('L');
	Clothes *clothes_first = clothes_factory->GetClothes('X');
	Clothes *clothes_second = clothes_factory->GetClothes('X');
	Clothes *leading_clothes_first = new LeadingRunnerClothes();
	Clothes *leading_clothes_second = new LeadingRunnerClothes();
	
	//check
	printf("clothes_first=%p,clothes_second=%p\n", clothes_first, clothes_second);
	printf("leading_clothes_first=%p,leading_clothes_second=%p\n",leading_clothes_first,leading_clothes_second);
	
	//clear 
	delete clothes_factory;
	delete leading_clothes_first;
	delete leading_clothes_second;
	system("Pause");
	return 0;
}