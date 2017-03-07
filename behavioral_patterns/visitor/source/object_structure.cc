#include "object_structure.h"

ObjectStructure::ObjectStructure(){

}

ObjectStructure::~ObjectStructure(){

}

void ObjectStructure::Add(People *people){
	people_list_.push_back(people);
}

void ObjectStructure::Remove(People * people){
	people_list_.remove(people);
}

void ObjectStructure::FeedBack(Action *action){
	list<People *>::iterator iterator;
	for(iterator = people_list_.begin();iterator != people_list_.end();iterator++){
		(*iterator)->Join(action);
	}
}