#include "caretaker.h"

Caretaker::Caretaker(){

}

Caretaker::~Caretaker(){

}

void Caretaker::SetMemento(Memento * memento){
	memento_ = memento;
}

Memento *Caretaker::GetMemento(){
	return memento_;
}