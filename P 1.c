#include<stdio.h>
int main()
{
    int x,y;
    scanf("%d%d",&x,&y);
    int *a=&x, *b=&y;
    float avg=(float)(*a+*b)/2;
    printf("Average = %.3f",avg);
}
