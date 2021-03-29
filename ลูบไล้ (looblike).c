#include<bits/stdc++.h>
using namespace std;
struct test
{
    int loob,table;
    bool operator<(const test&a)
	const
	{
        if(loob>a.loob) 
		return true;
        else 
		return false;
    }
};
int main()
{
    int sum,i,n,maxs=0;
    scanf("%d",&n);
    test a[10001];
    for(i=0;i<n;i++)
    {
        scanf("%d",&sum);
        a[sum].loob++;
        a[sum].table=sum;
    }
    sort(a,a+n);
    for(i=0;i<10001;i++)
    {
        if(a[i].loob!=0&&a[i].loob>maxs)
        {
            maxs=a[i].loob;
        }
    }
    for(i=0;i<10001;i++)
    {
        if(a[i].loob!=0&&a[i].loob==maxs)
        {
            printf("%d ",a[i].table);
        }
    }
    return 0;
}
