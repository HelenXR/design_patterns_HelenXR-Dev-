#include "helen_store.h"

HelenStore::HelenStore(Shoe* shoe):Store(shoe){

}

HelenStore::~HelenStore(){

}

void HelenStore::Selling(){
	shoe_->Sale();
}