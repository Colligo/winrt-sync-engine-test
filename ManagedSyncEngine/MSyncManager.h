#pragma once

namespace ManagedSyncEngine
{
	public ref class MSyncManager sealed
    {
    public:
		MSyncManager();

		void start();
		void shutDown();
	};
}