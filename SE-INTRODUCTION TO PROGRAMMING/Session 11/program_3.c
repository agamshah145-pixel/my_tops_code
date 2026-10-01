#include <stdio.h>

void main()
{
    int orders[5] = {250, 312, 510, 498, 676};
    int *porders = orders;

    printf("Value of order 1 = %d, Address of order 1 = %u\n",*porders, porders);
    printf("Value of order 2 =%d, Address of order 2 = %u\n",*(porders+1),(porders+1));
    printf("Value of order 3 =%d, Address of order 3 = %u\n",*(porders+2), (porders+2));
    printf("Value of order 4 =%d, Address of order 4 = %u\n",*(porders+3), (porders+3));
    printf("Value of order 5 =%d, Address of order 5 = %u\n",*(porders+4), (porders+4));

}