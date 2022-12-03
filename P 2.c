#include<stdio.h>
void swap(int *x,int *y)
{
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
}
int main()
{
    int n,i,j;
    scanf("%d",&n);
    int ara[n];
    for(i=0; i<n; i++)
    {
        scanf("%d",&ara[i]);
    }
    for(i=0; i<n; i++)
    {
        for(j=0; j<n-1; j++)
        {
            if(ara[j]>ara[j+1])
            {
                swap(&ara[j],&ara[j+1]);
            }
        }
    }
    for(i=0; i<n; i++)
    {
        printf("%d ",ara[i]);
    }
}
