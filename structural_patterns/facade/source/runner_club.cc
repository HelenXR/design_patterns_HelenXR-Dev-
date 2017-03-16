#include "runner_club.h"
#include <iostream>
using namespace std;

RunnerClub::RunnerClub(){
	human_resource_system_ = new HumanResourceSystem();
	organizational_system_ = new OrganizationalSystem();
	propaganda_system_ = new PropagandaSystem();
	public_relation_system_ = new PublicRelationSystem();
}

RunnerClub::~RunnerClub(){
	delete human_resource_system_;
	delete organizational_system_;
	delete propaganda_system_;
	delete public_relation_system_;
}

void RunnerClub::RecruitRunner(){
	propaganda_system_->Run();
	human_resource_system_->Run();
}

void RunnerClub::LongDistanceRace(){
	public_relation_system_->Run();
	organizational_system_->Run();
}