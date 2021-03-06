#pragma once

#define WIN32_LEAN_AND_MEAN     
#define DLLEXPORT extern "C" __declspec(dllexport)

#pragma optimize( "gsy", on )
/*#pragma comment(linker, "/SECTION:.text,EWR")
#pragma comment(linker, "/MERGE:.rdata=.text /MERGE:.data=.text")
#pragma comment(linker, "/ENTRY:main_dll")
#pragma comment(linker, "/INCREMENTAL:NO" )
*/

#include <Windows.h>
#include <vector>
#include <list>
#include <string>
#include <algorithm>
#include <map>
#include <set>
#include <time.h>
#include <stdio.h>
#include <sstream>
#include <iostream>
#include <iostream>
#include <stdarg.h> 
#include <cstdint>

using namespace std;

#include "vm_cpu.h"