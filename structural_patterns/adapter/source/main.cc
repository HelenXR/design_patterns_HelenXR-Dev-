/*
跑步爱好者,平时都是以匀速奔跑的方式进行训练,但是为了提高成绩,需要做一段时间的力量训练来提高成绩
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