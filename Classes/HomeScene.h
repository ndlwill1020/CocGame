#ifndef _HOME_SCENE_H_
#define _HOME_SCENE_H_
#include "Public.h"

class HomeScene : public Layer{
public:
	HomeScene();
	~HomeScene();
	static Scene* createScene();
	bool init();
	CREATE_FUNC(HomeScene);
private:

};

#endif