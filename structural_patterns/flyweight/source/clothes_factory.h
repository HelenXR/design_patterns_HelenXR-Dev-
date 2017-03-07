#ifndef HELENDP_SOURCE_CLOTHES_FACTORY_H_
#define HELENDP_SOURCE_CLOTHES_FACTORY_H_
#include "clothes.h"
#include <map>
using namespace std;
class ClothesFactory{
public:
	ClothesFactory();
	~ClothesFactory();
	Clothes *GetClothes(int key);
private:
	map<int,Clothes*> map_clothes_;
};
#endif