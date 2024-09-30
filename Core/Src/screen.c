#include "OLED.h"
#include "screen_def.h"

char VerifyChar = 'x';

typedef struct
{
    char *Line1;
    char *Line2;
    char *Line3;
    char *Line4;
} ScreenInfo;

typedef enum  {
     LIGHT_OPEN = 1,
     LIGHT_CLOSE = 2
} LightStatus;

void Screen_Show(ScreenInfo screen)
{
    OLED_ShowString(1, 1, screen.Line1);
    OLED_ShowString(2, 1, screen.Line2);
    OLED_ShowString(3, 1, screen.Line3);
    OLED_ShowString(4, 1, screen.Line4);
}

void Show_Portal(void)
{
    OLED_Clear();
    OLED_ShowString(1, 1, "Status: Close");
    // OLED_ShowNum(2, 1, 12345, 5);
    // OLED_ShowString(3, 1, "NaOH");
}

void Show_Menu(void)
{
    OLED_Clear();
    OLED_ShowString(1, 1, "Status");
    OLED_ShowString(2, 1, "Mode");
}

void Show_StatusMenu(void)
{
    ScreenInfo screen = {"open", "close"};
    OLED_Clear();
    Screen_Show(screen);
}

void Show_ModeMenu(void)
{
    ScreenInfo screen = {"Freestyle", "Import", "Export", "Game"};
    OLED_Clear();
    Screen_Show(screen);
}

void Show_Page(Page page)
{
    if (page == PORTAL)
    {
        Show_Portal();
    }
    if (page == MENU)
    {
        Show_Menu();
    }
    if (page == StatusMenu)
    {
        Show_StatusMenu();
    }
    if (page == MODE)
    {
        Show_ModeMenu();
    }
}