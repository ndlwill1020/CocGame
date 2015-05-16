#include "WelcomeScene.h"

WelcomeScene::WelcomeScene(){

}

WelcomeScene::~WelcomeScene(){

}

Scene* WelcomeScene::createScene(){
	auto scene=Scene::create();
	auto layer=WelcomeScene::create();
	scene->addChild(layer);
	return scene;
}

bool WelcomeScene::init(){
	if(!Layer::init()){
		return false;
	}

	this->setOpacity(0);
	this->showUI();

	return true;
}

void WelcomeScene::showUI(){
	auto visibleSize=Director::getInstance()->getVisibleSize();

	auto bg=Sprite::create(IMG_LOADING_BG);
	bg->setPosition(visibleSize.width/2,visibleSize.height/2);
	this->addChild(bg);

	auto fadeIn=FadeTo::create(0.1f,255.0f);
	auto fadeOut=FadeTo::create(0.1f,0.0f);
	auto func=CallFunc::create(CC_CALLBACK_0(WelcomeScene::changeScene,this));
	auto action=Sequence::create(fadeIn,fadeOut,func,NULL);

	this->runAction(action);
}

void WelcomeScene::changeScene(){
	GM()->enterHomeScene();
}