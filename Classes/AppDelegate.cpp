#include "AppDelegate.h"
#include "Public.h"

AppDelegate::AppDelegate() {

}

AppDelegate::~AppDelegate() 
{
}

bool AppDelegate::applicationDidFinishLaunching() {
    // initialize director
    auto director = Director::getInstance();
    auto glview = director->getOpenGLView();
    if(!glview) {
        glview = GLView::create("My Game");
		//glview->setFrameSize(960.0f,640.0f);
		glview->setFrameSize(480.0f, 270.0f);
		//glview->setFrameSize(1024.0f, 768.0f);
        director->setOpenGLView(glview);
    }

	//按宽比 分辨率比设计分辨率大的会裁剪
	//按高比 分辨率比设计分辨率大的会有黑边
	glview->setDesignResolutionSize(960.0f,640.0f,ResolutionPolicy::FIXED_WIDTH);

    // turn on display FPS
    director->setDisplayStats(true);

    // set FPS. the default value is 1.0/60 if you don't call this
    director->setAnimationInterval(1.0 / 60);

	this->loadResources();

    // create a scene. it's an autorelease object
	auto scene = WelcomeScene::createScene();

    // run
    director->runWithScene(scene);


    return true;
}

// This function will be called when the app is inactive. When comes a phone call,it's be invoked too
void AppDelegate::applicationDidEnterBackground() {
    Director::getInstance()->stopAnimation();

    // if you use SimpleAudioEngine, it must be pause
    SimpleAudioEngine::getInstance()->pauseBackgroundMusic();
}

// this function will be called when the app is active again
void AppDelegate::applicationWillEnterForeground() {
    Director::getInstance()->startAnimation();

    // if you use SimpleAudioEngine, it must resume here
    SimpleAudioEngine::getInstance()->resumeBackgroundMusic();
}


void AppDelegate::loadResources(){
	DBM()->createTable();
}