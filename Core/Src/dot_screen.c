#include "ws281x.h"

void Set_DotScreen_Status(int status)
{
    if (status == 1)
    {
        WS_WriteAll_RGB(255, 0, 0);
    }
    if (status == 2)
    {
        WS_CloseAll();
    }
}

int Select_Menu(int menu)
{
    if (menu == 1)
    {
        return 3;
    }
    if (menu == 2)
    {
        return 4;
    }
    
}