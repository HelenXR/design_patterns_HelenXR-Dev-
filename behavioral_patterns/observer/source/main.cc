#include <windows.h>
#include "runner_people.h"
#include "volunteer_people.h"
#include "sponsor_subject.h"

/*
design_pattern:"observer"
Marathon, the organizers need to send some information to the participants 
according to the weather conditions, if it rains, athletes and volunteers will 
wear a disposable raincoat, if it does not rain, we will as usual
*/
int main(){
	SponsorSubject *sponsor = new SponsorSubject();
	RunnerPeople *zhang_san = new RunnerPeople(sponsor,"zhang san");
	RunnerPeople *li_si = new RunnerPeople(sponsor,"li si");
	VolunteerPeople *volunteer = new VolunteerPeople(sponsor,"wang wu");

	sponsor->Add(zhang_san);
	sponsor->Add(li_si);
	sponsor->Add(volunteer);

	sponsor->Notify("rainy day,putting on a raincoat!");
	/*
	sponsor->Notify("sunny day,as usual!");
	*/
	
	//clear
	delete sponsor;
	delete zhang_san;
	delete li_si;
	delete volunteer;
	system("Pause");
	return 0;
}