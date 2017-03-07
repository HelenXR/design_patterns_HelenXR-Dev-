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
	//������ҵ�����ͬ��Ԫ��,��ֱ�ӷ��ظö���,���û�м�ֵ��Ӧ��Ԫ��,�򴴽�
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