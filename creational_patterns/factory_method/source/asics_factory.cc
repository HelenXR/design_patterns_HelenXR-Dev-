#include "asics_factory.h"
#include "asics_running_shoe.h"

AsicsFactory::AsicsFactory(){

}

AsicsFactory::~AsicsFactory(){

}

RunningShoe *AsicsFactory::CreateRunningShoe(){
	return new AsicsRunningShoe();
}
