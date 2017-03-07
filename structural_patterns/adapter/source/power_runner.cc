#include "power_runner.h"
#include <iostream>
using namespace std;

PowerRunner::PowerRunner(MuscleTraining * muscle_training){
	muscle_training_ = muscle_training;
}

PowerRunner::~PowerRunner(){
	
}

void PowerRunner::TrainingMethod(){
	muscle_training_->MuscleTrainingMethod();
}