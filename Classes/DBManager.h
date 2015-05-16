#ifndef _DBMANAGER_H_
#define _DBMANAGER_H_
#include "Public.h"

#define DBM() DBManager::getInstance()

class DBManager : public Ref{
public:
	DBManager();
	~DBManager();
	static DBManager* getInstance();

	void createTable();

	void createPlayerInfo();
	void createTownStateInfo();
	void createMiwuStateInfo();
    void createBuildingListInfo();
    void createSoilderListInfo();
    void createHeroListInfo();
private:
	static DBManager* DBM_instance;
};

#endif