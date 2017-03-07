#include "clothes_factory.h"
#include "runner_clothes.h"
#include <iostream>
using namespace std;

ClothesFactory::ClothesFactory(){

}

ClothesFactory::~ClothesFactory(){

}

Clothes *ClothesFactory::GetClothes(int key){
	map<int,Clothes*>::iterator iterator = map_clothes_.find(key);
	//如果查找到与相同的元素,则直接返回该对象,如果没有键值对应的元素,则创建
	if(iterator == map_clothes_.end()){
		Clothes *clothes = new RunnerClothes();
		map_clothes_.insert(make_pair(key,clothes));
		cout << "key (" << key << ")" << " is not exist,insert." << endl;
		return clothes;
	}
	else{
		cout << "key (" << key << ")" << " is exist,return" << endl;
		return iterator->second;
	}
}