#ifndef _PUBLIC_H_
#define _PUBLIC_H_
#include "cocos2d.h"
USING_NS_CC;
#include "SimpleAudioEngine.h"
using namespace CocosDenshion;
using namespace std;

//class
//public
class GlobalManager;
class DBManager;
//Scene
class WelcomeScene;
class HomeScene;

//public
#include "GameConstants.h"
#include "GlobalManager.h"
#include "DBManager.h"
//Scene
#include "WelcomeScene.h"
#include "HomeScene.h"

//sqlite3
#include "sqlite3.h"

#endif