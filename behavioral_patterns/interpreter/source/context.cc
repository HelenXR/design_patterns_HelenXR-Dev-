#include "context.h"

Context::Context(string str){
	if(EXPRESSION_MAX_LENGTH == str.length()){
		strcpy((char*)expression_, str.c_str());			
	}
	else
		printf("Context construct error,str length is %d\n",str.length());
}

Context::~Context(){

}