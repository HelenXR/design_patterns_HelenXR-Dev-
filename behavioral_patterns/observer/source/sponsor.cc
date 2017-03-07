#include "sponsor.h"

Sponsor::Sponsor(){

}

Sponsor::~Sponsor(){

}

void Sponsor::Add(People * people){
	people_list_.push_back(people);
}

void Sponsor::Remove(People * people){
	people_list_.remove(people);
}

void Sponsor::Notify(string message){
	for(list<People *>::iterator iterator = people_list_.begin();
	iterator != people_list_.end();++iterator){
		(*iterator)->Update(message);
		}
}