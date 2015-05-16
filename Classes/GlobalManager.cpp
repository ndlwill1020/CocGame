#include "GlobalManager.h"

GlobalManager* GlobalManager::_globalManagerInstance=nullptr;

GlobalManager::GlobalManager(){

}

GlobalManager::~GlobalManager(){

}
	

GlobalManager* GlobalManager::getInstance(){
	if(_globalManagerInstance==nullptr){
		_globalManagerInstance=new GlobalManager();
	}
	return _globalManagerInstance;
}


void GlobalManager::enterHomeScene(){
	auto scene=HomeScene::createScene();
	Director::getInstance()->replaceScene(TransitionFade::create(0.5f,scene));
}