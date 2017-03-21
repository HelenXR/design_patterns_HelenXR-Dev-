#include <windows.h>
#include "swim_action.h"
#include "bike_action.h"
#include "run_action.h"
#include "female_people.h"
#include "male_people.h"
#include "Object_structure.h"

/*
design_pattern:"visitor"
在跑团的活动中,男/女参与各种各样的活动,对于活动有各自的评价,活动类型很有可能随着时间不断添加,访问者模式,对于活动的增加扩展性极好
游泳: 男人可以看美女,女人可以秀身材
跑步: 男人觉得大汗淋淋,很舒服,女人觉得又累又无聊
骑行: 男人觉得一个人骑车,好无聊!,女生很享受沿途的风景
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