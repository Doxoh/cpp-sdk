#pragma once

#include "../types/StringView.h"
#include "../types/String.h"
#include "../Ref.h"
#include "../types/ConnectionInfo.h"

#include "CEvent.h"

namespace alt
{
	class IPlayer;

	class CPlayerBeforeConnectEvent : public CEvent
	{
	public:
		CPlayerBeforeConnectEvent(ConnectionInfo _connectionInfo) :
			CEvent(Type::PLAYER_BEFORE_CONNECT),
			connectionInfo(_connectionInfo)
		{
		}

		ConnectionInfo GetConnectionInfo() const { return connectionInfo; }
		String GetReason() const { return reason; }

		void Cancel(String _reason)
		{
			reason = _reason;
			CEvent::Cancel();
		}

	private:
		ConnectionInfo connectionInfo;
		String reason;
	};
}
