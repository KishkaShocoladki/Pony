

#include "TXLib.h"

void drawButton(int x, int y, HDC baton, const char* text)
{
    txSelectFont("Arial", 30);
    txTransparentBlt(txDC(), x,   y, 530, 140, baton, 0,0 ,TX_WHITE);
    txDrawText      (x, y, x + 530, y + 140, text);
}

int main()
    {
    txCreateWindow(1200, 700);
    //HDC  poni = txLoadImage ("poni.bmp");
    HDC  baton = txLoadImage ("Menu_Button.bmp");
    drawButton(0, 0, baton,   "онмх"  ) ;
    drawButton(0, 130, baton, "убняр" ) ;
    drawButton(0, 260, baton,"йношрю" ) ;
    drawButton(0, 390, baton,"цнкнбю" ) ;
    drawButton(0, 520, baton, "рекн"  ) ;





    //txDeleteDC (poni);
    txDeleteDC (baton);

    return 0;
    }

