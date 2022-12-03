#include<stdio.h>
float area(float r)
{
    return 3.1416*r*r;
}
int main()
{
    float r;
    scanf("%f",&r);
    printf("%f",area(r));
}
