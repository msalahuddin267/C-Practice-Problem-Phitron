#include<stdio.h>
void uppercase(char str[])
{
    int i;
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]%2==0)
        {
            str[i]=str[i]-32;
        }
    }
    printf("%s",str);
}
int main()
{
    char str[100];
    scanf("%s",str);
    uppercase(str);
}
