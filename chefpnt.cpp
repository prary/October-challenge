#include<bits/stdc++.h>
using namespace std;
#define gc getchar_unlocked

/*void scanint(int &x)
{
    register int c = gc();
    x = 0;
    int neg = 0;
    for(;((c<48 || c>57) && c != '-');c = gc());
    if(c=='-') {neg=1;c=gc();}
    for(;c>47 && c<58;c = gc()) {x = (x<<1) + (x<<3) + c - 48;}
    if(neg) x=-x;
}*/
int main()
{
    int n,i,j,m,k,a,b;
    scanf("%d%d%d",&n,&m,&k);
    int arr[n][m],c=0;
    pair<int,int> p[10000];
    /*for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
            arr[i][j]=0;
    }*/
    memset(arr,0,sizeof(arr));
    /**/
    //k=min(n*m-1,3000);
    while(k--)
    {
        scanf("%d%d",&a,&b);
        arr[a-1][b-1]=1;
    }
    if(n<=m)
    {
    for(i=0;i<n;i++)
    {
        int flag=0;
        for(j=0;j<m;j++)
            {
                if(arr[i][j]==0&&flag==0)
                {
                    p[c]=make_pair(i+1,j+1);
                    c++;
                    flag=1;
                }
                else if(arr[i][j]==1)
                {
                    flag=0;
                }

            }
    }
    a=0;
    }
    else
    {
        for(i=0;i<m;i++)
        {
        int flag=0;
        for(j=0;j<n;j++)
            {
                if(arr[j][i]==0&&flag==0)
                {
                    p[c]=make_pair(j+1,i+1);
                    c++;
                    flag=1;
                }
                else if(arr[j][i]==1)
                {
                    flag=0;
                }
            }
        }
        a=1;
    }
    printf("%d\n",c);

    for(i=0;i<c;i++)
        printf("%d %d %d\n",p[i].first,p[i].second,a);
    return 0;
}
