#pragma once

namespace API
{

#ifdef _WIN64

#include <Windows.h>

#endif

#ifdef __APPLE || (__MOACH__)
#include "mac.h"
#endif


}