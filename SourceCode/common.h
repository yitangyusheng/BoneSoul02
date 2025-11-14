#pragma once

// 定数
#define SCREEN_W		1280 //スクリーンサイズ
#define SCREEN_H		720	 //スクリーンサイズ

#define PLAYER_SIZE_W	120  //プレイヤー画像サイズ
#define PLAYER_SIZE_H	135  //プレイヤー画像サイズ

#define ENEMY_SIZE_W	70  //エネミー画像サイズ ＜修正の必要あり
#define ENEMY_SIZE_H	70  //エネミー画像サイズ ＜修正の必要あり

enum SCENE //シーンのラベル
{
	SCENE_NONE = -1,
	SCENE_TITLE, // 0
	SCENE_GAME	 // 1
};

// extern宣言
extern int curScene;
extern int nextScene;