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
    HDC  baton = txLoadImage ("Pictures/Menu_Button.bmp");

    while (true)
    {
        txSetFillColor(TX_BLACK);
        txClear();


        MenuButton b = {baton, 0,530,10,140,"����"};

        txSelectFont("Arial", 30);
        txTransparentBlt(txDC(), b.x1, b.y1,  b.x2 - b.x1, b.y2 - b.y1,      b.Button, 0,0 ,TX_WHITE);
        txDrawText             ( b.x1, b.y1,  b.x2,      b.y2     , b.text);


        //drawButton(0, 0, baton,   "����"  ) ;
        drawButton(0, 130, baton, "�����" ) ;
        drawButton(0, 260, baton,"������" ) ;
        drawButton(0, 390, baton,"������" ) ;
        drawButton(0, 520, baton, "����"  ) ;


        if (txMouseButtons() & 1 &&                //������ ������
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
            txTextOut(500, 50, "����");
        }

        if (txMouseButtons() & 1 &&                //������ ������
            txMouseX() >= 100 &&
            txMouseX() <= 530 &&
            txMouseY() >= 130 + 30 &&
            txMouseY() <= 260 - 45)
        {
            txMessageBox("3", "4");
        }

        if  (txMouseX() >= 100 &&
            txMouseX() <= 530 &&
            txMouseY() >= 130 + 30 &&
            txMouseY() <= 260 - 45)
        {
            txTextOut(500, 170, "�����");
        }


        if (txMouseButtons() & 1 &&                //������ ������
            txMouseX() >= 100 &&
            txMouseX() <= 530 &&
            txMouseY() >= 260 + 30 &&
            txMouseY() <= 390 - 45)
        {
            txMessageBox("5", "6");
        }

        if  (txMouseX() >= 100 &&
            txMouseX() <= 530 &&
            txMouseY() >= 260 + 30 &&
            txMouseY() <= 390 - 45)
        {
            txTextOut(500, 300, "������");
        }

        if (txMouseButtons() & 1 &&                //�������� ������
            txMouseX() >= 100 &&
            txMouseX() <= 530 &&
            txMouseY() >= 390 + 30 &&
            txMouseY() <= 520 - 45)
        {
            txMessageBox("7", "8");
        }

        if  (txMouseX() >= 100 &&
            txMouseX() <= 530 &&
            txMouseY() >= 390 + 30 &&
            txMouseY() <= 520 - 45)
        {
            txTextOut(500, 430, "������");
        }

        if (txMouseButtons() & 1 &&                //����� ������
            txMouseX() >= 100 &&
            txMouseX() <= 530 &&
            txMouseY() >= 520 + 30 &&
            txMouseY() <= 650 - 45)
        {
            txMessageBox("9", "10");
        }

        if  (txMouseX() >= 100 &&
            txMouseX() <= 530 &&
            txMouseY() >= 520 + 30 &&
            txMouseY() <= 650 - 45)
        {
            txTextOut(500, 560, "����");
        }

        txSleep(10);
    }


    //txDeleteDC (poni);
    txDeleteDC (baton);

    return 0;
}
