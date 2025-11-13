#pragma once

// ’è”
#define SCREEN_W		1280
#define SCREEN_H		720

enum SCENE //ƒV[ƒ“‚Ìƒ‰ƒxƒ‹
{
	SCENE_NONE = -1,
	SCENE_TITLE, // 0
	SCENE_GAME	 // 1
};

// externéŒ¾
extern int curScene;
extern int nextScene;