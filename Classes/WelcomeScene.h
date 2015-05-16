#ifndef _WELCOME_SCENE_H_
#define _WELCOME_SCENE_H_
#include "Public.h"
class WelcomeScene : public Layer{
public:
	WelcomeScene();
	~WelcomeScene();
	static Scene* createScene();
	bool init();
	CREATE_FUNC(WelcomeScene);
private:
	void showUI();
	void changeScene();
};


#endif