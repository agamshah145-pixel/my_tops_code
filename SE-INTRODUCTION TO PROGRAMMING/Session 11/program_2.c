#include <stdio.h>

void swapPlaylistCounts(int*a, int*b)
{
    int count = *a;
    *a = *b;
    *b = count;
}

void main()
{
  int a = 10;
  int b = 20;
  printf("new value is a = %d and b = %d \n",a, b);

  swapPlaylistCounts(&a, &b);

  printf("new value is a = %d and b = %d ",a, b);

}
