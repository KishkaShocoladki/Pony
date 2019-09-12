

#include "TXLib.h"

int main()
    {
    txCreateWindow(1200, 700);
    HDC  poni = txLoadImage ("poni.bmp");

    txTransparentBlt(txDC(), 400, 250, 600, 400, poni, 0,0 ,TX_WHITE);



    txDeleteDC (poni);

    return 0;
    }

