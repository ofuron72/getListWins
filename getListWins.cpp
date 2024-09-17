#include <iostream>
#include <windows.h>
#include "Winuser.h"


BOOL CALLBACK EnumWindowsProc(HWND hwnd, LPARAM lParam) {
    
    if (IsWindowVisible(hwnd)) {

        std::cout << "HWND: " << hwnd << std::endl;
    }
    return TRUE; 
}


int main()
{
    EnumWindows(EnumWindowsProc, NULL);
    return  0;
}
