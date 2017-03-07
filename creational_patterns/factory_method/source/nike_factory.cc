#include "nike_factory.h"
#include "nike_running_shoe.h"

NikeFactory::NikeFactory(){

}

NikeFactory::~NikeFactory(){

}

RunningShoe* NikeFactory::CreateRunningShoe(){
	return new NikeRunningShoe();
}
