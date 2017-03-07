#ifndef HELENDP_SOURCE_APPLE_WATCH_H_
#define HELENDP_SOURCE_APPLE_WATCH_H_
#include "watch.h"

class AppleWatch : public Watch{
public:
	AppleWatch();
	~AppleWatch();

	void ShowInformation();
};
#endif