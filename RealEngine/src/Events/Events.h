#pragma once

#include "../Log/Log.h"

namespace Events 
{

	class Events
	{

	public:

		Events();
		virtual ~Events();

		void getKeyPressW();
		void getKeyPressA();
		void getKeyPressS();
		void getKeyPressD();

	};

}