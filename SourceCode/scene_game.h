#pragma once

#include "../GameLib/game_lib.h"

//共通
#include "common.h"

using namespace GameLib;
using namespace input;

//プロトタイプ宣言
void game_init();
void game_deinit();
void game_update();
void game_render();