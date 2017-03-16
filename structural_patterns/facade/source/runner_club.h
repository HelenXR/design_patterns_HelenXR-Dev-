#ifndef HELENDP_SOURCE_RUNNER_CLUB_H_
#define HELENDP_SOURCE_RUNNER_CLUB_H_
#include "human_resource_system.h"
#include "organizational_system.h"
#include "propaganda_system.h"
#include "public_relation_system.h"

class RunnerClub{
public:
	RunnerClub();
	~RunnerClub();
	void RecruitRunner();
	void LongDistanceRace();
private:
	HumanResourceSystem *human_resource_system_;
	OrganizationalSystem *organizational_system_;
	PropagandaSystem *propaganda_system_;
	PublicRelationSystem *public_relation_system_;
	
};
#endif