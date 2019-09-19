#include "TXLib.h"

struct MenuButton
{
    HDC Button;

    int x1;
    int x2;
    int y1;
    int y2;
    const char* text;
};

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

    while (true)
    {
        txSetFillColor(TX_BLACK);
        txClear();
        drawButton(0, 0, baton,   "ÏÎÍÈ"  ) ;
        drawButton(0, 130, baton, "ÕÂÎÑÒ" ) ;
        drawButton(0, 260, baton,"ÊÎÏÛÒÀ" ) ;
        drawButton(0, 390, baton,"ÃÎËÎÂÀ" ) ;
        drawButton(0, 520, baton, "ÒÅËÎ"  ) ;


        if (txMouseButtons() & 1 &&
            txMouseX() >= 100 &&
            txMouseX() <= 530 &&
            txMouseY() >=   0 + 30 &&
            txMouseY() <= 140 - 45)
        {
            txMessageBox("1", "2");
        }

        if  (txMouseX() >= 100 &&
            txMouseX() <= 530 &&
            txMouseY() >=   0 + 30 &&
            txMouseY() <= 140 - 45)
        {
            txTextOut(500, 50, "ÏÐÈÂ");
        }

        txSleep(10);
    }
  
    MenuButton b = {Button, 0,530,10,140,"ÏÎÍÈ"};

    txSelectFont("Arial", 30);
    txTransparentBlt(txDC(), b.x1, b.y1,  b.x2 - b.x1, b.y2 - b.y1,      b.Button, 0,0 ,TX_WHITE);
    txDrawText             ( b.x1, b.y1,  b.x2,      b.y2     , b.text);


    //txDeleteDC (poni);
    txDeleteDC (Button);

    return 0;
}