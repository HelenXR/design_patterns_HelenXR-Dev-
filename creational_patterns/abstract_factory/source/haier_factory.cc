#include "haier_factory.h"
#include "haier_cooker.h"
#include "haier_washer.h"

HaierFactory::HaierFactory()
{
}

HaierFactory::~HaierFactory(){

}

AbstractCooker* HaierFactory::CreateCooker(){
	return new HaierCooker();
}

AbstractWasher* HaierFactory::CreateWasher(){
	return new HaierWasher();
}
