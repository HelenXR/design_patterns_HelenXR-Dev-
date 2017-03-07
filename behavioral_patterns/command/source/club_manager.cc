#include "club_manager.h"
#include <iostream>
using namespace std;

ClubManager::ClubManager(){

}

ClubManager::~ClubManager(){

}

void ClubManager::AddCommand(Command * command){
	command_list_.push_back(command);
}

void ClubManager::DeleteCommand(Command * command){
	command_list_.remove(command);
}

void ClubManager::Action(){
	list<Command *>::iterator iterator;
	for (iterator = command_list_.begin(); iterator != command_list_.end(); ++iterator){
		(*iterator)->ExcuteCommand();
	}
}