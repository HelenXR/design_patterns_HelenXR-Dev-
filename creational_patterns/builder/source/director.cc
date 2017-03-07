#include "director.h"
#include "builder.h"

Director::Director(){

}

Director::~Director(){

}
//组装手机
Phone *Director::AssemblePhone(){
	builder_->AssembleStepOne();
	builder_->AssembleStepTwo();
	builder_->AssembleStepThree();
	return builder_->GetPhone();
}

void Director::SetBuilder(Builder *builder){
	builder_ = builder;
}
