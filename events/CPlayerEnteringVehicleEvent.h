#pragma once

#include "CEvent.h"

namespace alt
{
	class IVehicle;
	class IPlayer;

	class CPlayerEnteringVehicleEvent : public CEvent
	{
	public:
		CPlayerEnteringVehicleEvent(IVehicle* _target, IPlayer* _player, uint8_t _seat) :
			CEvent(Type::PLAYER_ENTERING_VEHICLE),
			target(_target),
			player(_player),
			seat(_seat)
		{

		}

		IVehicle* GetTarget() const { return target; }
		IPlayer* GetPlayer() const { return player; }
		uint8_t GetSeat() const { return seat; }

	private:
		IVehicle* target;
		IPlayer* player;
		uint8_t seat;
	};
}