
#include "stdafx.h"

/*
int main() {
    
    test_arith();
 
    return 0;
}
//*/


BOOL APIENTRY DllMain( HMODULE hModule,
                       DWORD  ul_reason_for_call,
                       LPVOID lpReserved
                     )
{
    switch (ul_reason_for_call) {

    case DLL_PROCESS_ATTACH: {
        AllocConsole();
        freopen("CONOUT$", "w", stdout);

        HANDLE  hout = GetStdHandle(STD_OUTPUT_HANDLE);

        COORD  size;
        size.X = 256;    
        size.Y = 20000; 
        SetConsoleScreenBufferSize(hout, size);
        break;
    }

    case DLL_THREAD_ATTACH: {

        break;
    }

    case DLL_THREAD_DETACH: {

        break;
    }

    case DLL_PROCESS_DETACH: {

        break;
    }


    default:
        break;
    }
    return TRUE;
}

//*/