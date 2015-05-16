#ifndef _GLOBAL_MANAGER_H_
#define _GLOBAL_MANAGER_H_
#include "Public.h"

#define GM() GlobalManager::getInstance()

class GlobalManager : public Ref{
public:
	static GlobalManager* getInstance();
	void enterHomeScene();
private:
	GlobalManager();
	~GlobalManager();
	static GlobalManager* _globalManagerInstance;
};


#endif