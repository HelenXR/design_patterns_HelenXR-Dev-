#include "runner_club.h"
#include "runner_iterator.h"
#include <stdio.h>
#include <iostream>
using namespace std;

RunnerClub::RunnerClub(){
	iterator_ = NULL;
	vector_.clear();
}

RunnerClub::~RunnerClub(){
	if(!iterator_){
		delete iterator_;
		iterator_ = NULL;
	}
}

int RunnerClub::GetTotal(){
	return vector_.size();
}

void RunnerClub::Append(string name){
	vector_.push_back(name);
}

string RunnerClub::Gain(int index){
	return vector_[index % vector_.size()];
}

Iterator* RunnerClub::CreateIterator(){
	iterator_ = new RunnerIterator(this);
	return iterator_;
}