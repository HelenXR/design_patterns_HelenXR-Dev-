/*
�����ɱ���ʱ,���췽��Ҫ������������������߷���һЩ��Ϣ,���������,�˶�Ա��־Ը�߾�Ҫ��һ��������,���û����,��Ҿ��ճ�.
*/
#include <windows.h>
#include "runner_people.h"
#include "volunteer_people.h"
#include "sponsor.h"

int main(){
	Sponsor *sponsor = new Sponsor();
	RunnerPeople *zhang_san = new RunnerPeople("����");
	RunnerPeople *li_si = new RunnerPeople("����");
	VolunteerPeople *volunteer = new VolunteerPeople("־Ը��");

	sponsor->Add(zhang_san);
	sponsor->Add(li_si);
	sponsor->Add(volunteer);

	sponsor->Notify("������,������");
	/*
	sponsor->Notify("û����,�ճ�����");
	*/
	//clear
	delete sponsor;
	delete zhang_san;
	delete li_si;
	delete volunteer;
	system("Pause");
	return 0;
	}