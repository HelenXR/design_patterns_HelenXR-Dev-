#include "clothes_factory.h"
#include "runner_clothes.h"
#include <iostream>
using namespace std;

ClothesFactory::ClothesFactory(){

}

ClothesFactory::~ClothesFactory(){
	map<int,Clothes*>::iterator iterator;
	iterator = map_clothes_.begin();
	while(iterator != map_clothes_.end()){
		delete iterator->second;
		printf("%s:[%c] delete!\n",__func__,iterator->first);
		iterator++;
	}
}

Clothes *ClothesFactory::GetClothes(int key){
	map<int,Clothes*>::iterator iterator = map_clothes_.find(key);
	
	if(iterator == map_clothes_.end()){
		Clothes *clothes = new RunnerClothes();
		map_clothes_.insert(make_pair(key,clothes));
		cout << "key (" << key << ")" << " is not exist,insert." << endl;
		return clothes;
	}
	else{
		cout << "key (" << key << ")" << " is exist,return object." << endl;
		return iterator->second;
	}
}