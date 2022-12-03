#include<stdio.h>
int sum(int n, int ara[])
{
    int i,res=0;
    for(i=0;i<n;i++)
    {
        if(ara[i]%10==0)
            res=res+ara[i];
    }
    return res;
}
int main()
{
    int n,i;
    scanf("%d",&n);
    int ara[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&ara[i]);
    }
    printf("%d",sum(n,ara));
}
