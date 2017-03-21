#include <windows.h>
#include "swim_action.h"
#include "bike_action.h"
#include "run_action.h"
#include "female_people.h"
#include "male_people.h"
#include "Object_structure.h"

/*
design_pattern:"visitor"
�����ŵĻ��,��/Ů������ָ����Ļ,���ڻ�и��Ե�����,����ͺ��п�������ʱ�䲻�����,������ģʽ,���ڻ��������չ�Լ���
��Ӿ: ���˿��Կ���Ů,Ů�˿��������
�ܲ�: ���˾��ô�����,�����,Ů�˾�������������
����: ���˾���һ�����ﳵ,������!,Ů����������;�ķ羰
*/
int main(){
	ObjectStructure *object = new ObjectStructure();
	People *male = new MalePeople();
	People *female = new FemalePeople();
	Action *swim = new SwimAction();
	object->Add(male);
	object->Add(female);
	object->FeedBack(swim);

	//add bike item
	Action *bike = new BikeAction();
	object->FeedBack(bike);
	//add run item
	Action *run = new RunAction();
	object->FeedBack(run);

	//add ... item easy.

	//clear
	delete object;
	delete male;
	delete female;
	delete swim;
	delete bike;
	delete run;
	system("Pause");
	return 0;
}