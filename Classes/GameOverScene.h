/*#ifndef __GAME_OVER_SCENE_h__
#define __GAME_OVER_SCENE_H__
#include "cocos2d.h"

class GameOver : public cocos2d::Layer
{
public:
	static cocos2d::Scene* createScene();
	virtual bool init();
	CREATE_FUNC(GameOver);

	void GoToGameScene(Ref* pSender);
	void GoToMainMenuScene(Ref* pSender);

};
#endif*/

#ifndef __GAME_OVER_SCENE_h__
#define __GAME_OVER_SCENE_H__
#include "cocos2d.h"

class GameOver : public cocos2d::Layer
{
public:
	static cocos2d::Scene* createScene();
	virtual bool init();
	CREATE_FUNC(GameOver);
private:
	void GoToMainMenuScene(Ref* pSender);
	void Retry(Ref* pSender);
	void buttonPressed();
	cocos2d::Sprite* backgroundSprite;


};
#endif