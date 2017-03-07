#include "memento.h"

Memento::Memento(string date){
	date_ = date;
}

Memento::~Memento(){

}

string Memento::GetDate(){
	return date_;
}