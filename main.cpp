#include "TXLib.h"

void drawButton(int x, int y, HDC baton, const char* text)
{
    txSelectFont("Arial", 30);
    txTransparentBlt(txDC(), x,   y, 530, 140, baton, 0,0 ,TX_WHITE);
    txDrawText      (x, y, x + 530, y + 140, text);
}

struct MenuButton
{
    HDC Button;

    int x1;
    int x2;
    int y1;
    int y2;
    const char* text;
};

int main()
{
txCreateWindow(1200, 700);
HDC Button = txLoadImage ("Menu_Button.bmp");
MenuButton b = {Button, 0,530,10,140,"œŒÕ»"};

    txSelectFont("Arial", 30);
    txTransparentBlt(txDC(), b.x1, b.y1,  b.x2 - b.x1, b.y2 - b.y1,      b.Button, 0,0 ,TX_WHITE);
    txDrawText             ( b.x1, b.y1,  b.x2,      b.y2     , b.text);


    //txDeleteDC (poni);
    txDeleteDC (Button);

    return 0;
}
