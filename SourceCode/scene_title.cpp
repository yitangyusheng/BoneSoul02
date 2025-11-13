#include "scene_title.h"

//•Ï”‚ÌéŒ¾
int title_state;
int title_timer;

Sprite* sprCar;

void title_init()
{
	title_state = 0;
	title_timer = 0;
	Sprite* sprCar = nullptr;
}
void title_deinit()
{
	safe_delete(sprCar);
}
void title_update()
{
	title_timer++;
	
	switch (title_state)
	{
	case 0:
		/*‰Šúİ’è*/
		sprCar = sprite_load (L"./Data/Images/right.png");

		title_state++;
		/*fallthrough*/

	case 1:
		/*ƒpƒ‰ƒ[ƒ^‚Ìİ’è*/
		GameLib::setBlendMode(Blender::BS_ALPHA);

		title_state++;
		/*fallthrough*/

	case 2:
		/*’Êí‚Ìˆ—*/
		if (TRG(0) & PAD_START)
		{
			nextScene = SCENE_GAME;
			break;
		}

		break;
	}
}
void title_render()
{
	GameLib::clear(0.5f, 0.5f, 0.5f);

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