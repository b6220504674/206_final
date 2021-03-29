#include <stdio.h>
int main()
{
    unsigned int n,i;
    int c,j,k,m;
    scanf("%d %d",&n,&c);
    i=n%10;
    if(i<c)
    {
    i=n%c;
    j=10-i;
    k=n+j;
    }
    else if(i>c)
    {
    j=i-c;
    m=10-j;
    k=n+m;
    }
    printf("%d",k);
    return 0;
}
