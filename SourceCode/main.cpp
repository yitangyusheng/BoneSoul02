//ファイルをインクルード
//システム、ライブラリ
#include "../GameLib/game_lib.h"
//共通
#include "common.h"
//個々のファイル
#include "scene_title.h"
#include "scene_game.h"

int curScene	= SCENE_NONE;
int nextScene	= SCENE_TITLE;
int kengo;

//WinMainを記述
int APIENTRY wWinMain(HINSTANCE, HINSTANCE, LPWSTR, int)
{
	//ゲームライブラリの初期設定
	GameLib::init(L"第二回チーム制作", SCREEN_W, SCREEN_H);

	//titleの初期設定
	//title_init();

	//ゲームループ
	while (GameLib::gameLoop())
	{
		if (curScene != nextScene)
		{
			//現在のシーンに応じた終了処理
			switch (curScene)
			{
			case SCENE_TITLE:
				title_deinit();
				break;

				case SCENE_GAME:
				game_deinit();
				break;
			}

			//次のシーンに応じた初期設定処理
			switch (nextScene)
			{
			case SCENE_TITLE:
				title_init();
				break;

			case SCENE_GAME:
				game_init();
				break;
			}

			//nextSceneがcurSceneになる
			curScene = nextScene;
		}
		//titleの初期設定
		//title_update();

		//titleの初期設定
		//title_render();

		//入力を更新する
		input::update();

		switch (curScene)
		{
		case SCENE_TITLE:
			title_update();
			title_render();
			break;
		case SCENE_GAME:
			game_update();
			game_render();
			break;
		}

		//デバッグ用文字列の表示
		debug::display(1, 1, 1, 1, 1);

		//画面を描画
		GameLib::present(1, 0);
	}

	//titleの終了処理
	//title_deinit();

	//現在のシーンに応じた終了処理
	switch (curScene)
	{
	case SCENE_TITLE:
		title_deinit();
		break;

	case SCENE_GAME:
		game_deinit();
		break;
	}

	//ゲームライブラリの終了設定
	GameLib::uninit();
	//正常終了
	return 0;
}