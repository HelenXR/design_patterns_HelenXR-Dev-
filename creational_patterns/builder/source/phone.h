#ifndef HELENDP_SOURCE_PHONE_H_
#define HELENDP_SOURCE_PHONE_H_
#include <string>
using namespace std;

/*
Mobile phone includes processor, memory, panel and other basic configuration
*/
class Phone{
public:
	Phone();
	~Phone();
	void AssembleProcessor(string processor);
	void AssembleMemory(string memory);
	void AssemblePanel(string panel);
	void ShowConfig();
private:
	string processor_;
	string memory_;
	string panel_;
	string base_config_;
};
#endif
