#include "DBManager.h"

DBManager* DBManager::DBM_instance=nullptr;

DBManager::DBManager(){

}

DBManager::~DBManager(){

}

DBManager* DBManager::getInstance(){
	if(DBM_instance==nullptr){
		DBM_instance=new DBManager();
	}
	return DBM_instance;
}

void DBManager::createTable(){
	std::string path=FileUtils::getInstance()->getWritablePath()+DB_NAME;//+"/"+
	log("%s",FileUtils::getInstance()->getWritablePath().c_str());
	if(FileUtils::getInstance()->isFileExist(path)){
		createPlayerInfo();
		createTownStateInfo();
        createMiwuStateInfo();
        createBuildingListInfo();
        createHeroListInfo();
        createSoilderListInfo();
	}
}


void DBManager::createPlayerInfo(){

}

void DBManager::createTownStateInfo(){

}

void DBManager::createMiwuStateInfo(){

}

void DBManager::createBuildingListInfo(){

}

void DBManager::createSoilderListInfo(){

}

void createHeroListInfo(){

}