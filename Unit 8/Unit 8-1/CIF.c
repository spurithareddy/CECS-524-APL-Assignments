
#include <stdio.h>

int main() {
    int rate=5,factor=1;
    switch(rate)
    {
        case 1:
        case 2:
        factor = 2 * rate - 1;
        break;
        case 3:
        case 5:
        factor = 3 * rate + 1;
        break;
        case 4:
        factor = 4 * rate - 1;
        break;
        case 6:
        case 7:
        case 8:
        factor = rate-2;
        break;
        default:
        factor = rate;
        break;
    }
   printf("%d",factor);

    return 0;
}