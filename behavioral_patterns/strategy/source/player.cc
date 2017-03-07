#include "player.h"

Player::Player(){

}

Player::~Player(){

}

void Player::SetRun(Run * run){
	run_ = run;
}

void Player::Training(){
	run_->Running();
}