#include "midea_factory.h"
#include "midea_cooker.h"
#include "midea_washer.h"

MideaFactory::MideaFactory(){

}

MideaFactory::~MideaFactory(){

}

AbstractCooker* MideaFactory::CreateCooker(){
	return new MideaCooker();
}

AbstractWasher* MideaFactory::CreateWasher(){
	return new MideaWasher();
}

