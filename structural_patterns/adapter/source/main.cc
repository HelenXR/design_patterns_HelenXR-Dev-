/*
design_pattern:"adapter"
*/
#include "power_runner.h"
#include <windows.h>
int main(){
	Runner *runner = new Runner();
	runner->TrainingMethod();
	MuscleTraining *muscle_training = new MuscleTraining();
	Runner *power_runner = new PowerRunner(muscle_training);
	power_runner->TrainingMethod();

	//clear
	delete runner;
	delete muscle_training;
	delete power_runner;
	system("Pause");
	return 0;
}