#include "HomeScene.h"

HomeScene::HomeScene(){

}

HomeScene::~HomeScene(){

}

Scene* HomeScene::createScene(){
	auto scene=Scene::create();
	auto layer=HomeScene::create();
	scene->addChild(layer);
	return scene;
}

bool HomeScene::init(){
	if(!Layer::init()){
		return false;
	}


	return true;
}