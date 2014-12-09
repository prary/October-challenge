#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,m,a,i=0,sum=0;
        double av;
        scanf("%d%d",&n,&m);
        while(i<n)
        {
            scanf("%d",&a);
            sum=sum+a;
            i++;
        }
        sum+=m;
        //av=sum/n;
        //av=av*n;
        if(sum%n==0)
            printf("Yes\n");
        else
            printf("No\n");
    }
    return 0;
}
