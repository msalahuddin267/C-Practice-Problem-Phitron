#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    int ara[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&ara[i]);
    }
    int *ad=&ara;
    for(i=0;i<n;i++)
    {
        printf("%d ",*ad);
        ad++;
    }

}
