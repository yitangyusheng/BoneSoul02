#include "scene_game.h"

//•Ï”‚ÌéŒ¾
int game_state;
int game_timer;

extern Sprite* sprCar;

void game_init()
{
	game_state = 0;
	game_timer = 0;
	Sprite* sprCar = nullptr;
}
void game_deinit()
{
	safe_delete(sprCar);
}
void game_update()
{
	game_timer++;

	switch (game_state)
	{
	case 0:
		/*‰Šúİ’è*/
		sprCar = sprite_load(L"./Data/Images/right.png");

		game_state++;
		/*fallthrough*/

	case 1:
		/*ƒpƒ‰ƒ[ƒ^‚Ìİ’è*/
		GameLib::setBlendMode(Blender::BS_ALPHA);

		game_state++;
		/*fallthrough*/

	case 2:
		/*’Êí‚Ìˆ—*/


		break;
	}
}
void game_render()
{
	GameLib::clear(1, 1, 0);

	sprite_render(
		sprCar,
		200, 200,
		1, 1,
		0, 0,
		256, 256,
		0, 0,
		0,
		1, 1, 1, 1);
}