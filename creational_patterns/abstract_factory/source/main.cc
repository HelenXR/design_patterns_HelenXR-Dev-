#include "abstract_factory.h"
#include "abstract_cooker.h"
#include "abstract_washer.h"
#include "haier_factory.h"
#include "midea_factory.h"
#include "windows.h"
/*
design_pattern:"abstract_factory"
*/
int main()
{
	AbstractFactory* haier_factory = new HaierFactory();
	AbstractFactory* midea_factory = new MideaFactory();
	AbstractCooker* haier_cooker = haier_factory->CreateCooker();
	AbstractWasher* haier_washer = haier_factory->CreateWasher();
	AbstractCooker* midea_cooker = midea_factory->CreateCooker();
	AbstractWasher* midea_washer = midea_factory->CreateWasher();
	haier_cooker->Cooking();
	haier_washer->Clothing();
	midea_cooker->Cooking();
	midea_washer->Clothing();

	//clear
	delete haier_factory;
	delete midea_factory;
	delete haier_cooker;
	delete haier_washer;
	delete midea_cooker;
	delete midea_washer;	
	system("Pause");
	return 0;
}
