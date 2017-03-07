#include "runner_iterator.h"

RunnerIterator::RunnerIterator(Club* club)
	:index_(0){
	club_ = club;
}
RunnerIterator::~RunnerIterator(){

}

string RunnerIterator::First(){
	return club_->Gain(0);
}

string RunnerIterator::Next(){
	index_ %= club_->GetTotal();
	return club_->Gain(index_++);
}

string RunnerIterator::GetCurrent(){
	return club_->Gain(index_);
}
bool RunnerIterator::IsEnd(){
	return (index_ >= club_->GetTotal() ? true : false );
}