#ifndef HELENDP_SOURCE_POWER_RUNNER_H_
#define HELENDP_SOURCE_POWER_RUNNER_H_
#include "muscle_training.h"
#include "runner.h"

class PowerRunner:public Runner{
public:
	PowerRunner(MuscleTraining* muscle_training);
	~PowerRunner();

	void TrainingMethod();
private:
	MuscleTraining *muscle_training_;
};
#endif