#pragma once

#include "CEvent.h"
#include "../Ref.h"

namespace alt
{
	class IVehicle;

	class CVehicleDetachEvent : public CEvent
	{
	public:
		CVehicleDetachEvent(Ref<IVehicle> _target, Ref<IVehicle> _detached) :
			CEvent(Type::VEHICLE_DEATTACH),
			target(_target),
			detached(_detached)
		{

		}

		Ref<IVehicle> GetTarget() const { return target; }
		Ref<IVehicle> GetAttached() const { return detached; }

	private:
		Ref<IVehicle> target;
		Ref<IVehicle> detached;
	};
}