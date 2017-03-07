#ifndef HELENDP_SOURCE_CARETAKER_H_
#define HELENDP_SOURCE_CARETAKER_H_
#include "memento.h"

class Caretaker{
public:
	Caretaker();
	~Caretaker();
	void SetMemento(Memento *memento);
	Memento *GetMemento();
private:
	Memento *memento_;
};
#endif