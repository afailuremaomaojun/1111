#include<stdio.h>
int main()
{
    int n,sum=0;

    while(scanf("%d", &n)!=EOF)
    {
        if (n<=10&&n>=0)sum=6*n;
        else if (n<=20)sum=60+2*(n-10);
        else if (n<=40)sum=60+n;
        else
            sum=100;

        printf("%d\n",sum);

    }
    return 0;
}
