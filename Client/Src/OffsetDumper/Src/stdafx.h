#pragma once

#define DIRECTINPUT_VERSION 0x0800
#define _WIN32_WINNT 0x0502 

#pragma warning( disable : 4251 )
#pragma warning( disable : 4244 )
#pragma warning( disable : 4996 )
#pragma warning( disable : 4355 )
#pragma warning( disable : 4995 )

#include <tchar.h>

#include <cstdint>

#include <Math/Math.hpp>

using namespace Framework;
using namespace Framework::Math;

// STL
#include <list>
#include <vector>
#include <ctime>
#include <fstream>
#include <deque>
#include <concurrent_queue.h>
#include <unordered_map>
#include <random>


// papyrus common
#include <common/skyscript.h>
#include <common/obscript.h>
#include <common/types.h>
#include <common/enums.h>
#include <common/plugin.h>
#include <common/Utils.h>


#include <StrSafe.h>
#include <dbghelp.h>
#include <shellapi.h>
#include <shlobj.h>

#include <FreeScript/FreeScript.hpp>
