#include "player.h"

Player::Player(string date){
	date_ = date;
}

Player::~Player(){

}

void Player::SetDate(string date){
	date_ = date;
}

string Player::GetDate(){
	return date_;
}

void Player::CreateMemento(){
	memento_ = new Memento(date_);
}

void Player::Recovery(Memento *memento){
	SetDate(memento->GetDate());
}