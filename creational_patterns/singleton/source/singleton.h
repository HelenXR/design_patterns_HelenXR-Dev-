#ifndef HELENDP_SOURCE_SINGLETON_H_
#define HELENDP_SOURCE_SINGLETON_H_

class Singleton{
public:
	~Singleton();
	static Singleton* GetInstance();
private:
	Singleton();
	static Singleton *singleton_;
};
#endif