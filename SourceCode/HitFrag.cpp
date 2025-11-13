#include "HitFrag.h"

bool HitFragSquare(VECTOR2 PlayerPos, VECTOR2 EnemyPos, float enemySize_X, float enemySize_Y)
{
	//プレイヤー
	float PlayerLeft	= PlayerPos.x - (PLAYER_SIZE_W * 0.5f);
	float PlayerRight	= PlayerPos.x + (PLAYER_SIZE_W * 0.5f);
	float PlayerTop		= PlayerPos.x + (PLAYER_SIZE_H * 0.5f);
	float PlayerBottom  = PlayerPos.x + (PLAYER_SIZE_H * 0.5f);

	//エネミー
	float EnemyLeft		= EnemyPos.x - (enemySize_X * 0.5f);
	float EnemyRight	= EnemyPos.x + (enemySize_X * 0.5f);
	float EnemyTop		= EnemyPos.x + (enemySize_Y * 0.5f);
	float EnemyBottom	= EnemyPos.x + (enemySize_Y * 0.5f);

	if ((PlayerRight > EnemyLeft) &&
		(PlayerLeft < EnemyRight) &&
		(PlayerTop < EnemyBottom) &&
		(PlayerBottom > EnemyTop))
	{
		return true;
	}
	//else
	//{
	return false;
	//}
}