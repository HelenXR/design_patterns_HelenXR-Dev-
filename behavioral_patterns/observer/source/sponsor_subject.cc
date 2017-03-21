#include "sponsor_subject.h"

SponsorSubject::SponsorSubject(){

}

SponsorSubject::~SponsorSubject(){

}

void SponsorSubject::Add(People * people){
	people_list_.push_back(people);
}

void SponsorSubject::Remove(People * people){
	people_list_.remove(people);
}

void SponsorSubject::Notify(string message){
	notify_message_ = message;
	for(list<People *>::iterator iterator = people_list_.begin();
	iterator != people_list_.end();++iterator){
		(*iterator)->Update();
	}
}