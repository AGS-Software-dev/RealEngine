#pragma once

#include <iostream>
#include "Log/Log.h"

#include "CoreApplication.h"

namespace Real
{

	class RealEngine
	{

	public:

		RealEngine() = default;
		virtual ~RealEngine() = default;

		int Running()
		{

			CoreApplication::CoreApplication CoreApplication;
			CoreApplication.Run();

			return 0;

		}

	};
	
}