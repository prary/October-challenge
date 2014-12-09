#include<bits/stdc++.h>
using namespace std;
#define gc getchar_unlocked

void scanint(int &x)
{
    register int c = gc();
    x = 0;
    int neg = 0;
    for(;((c<48 || c>57) && c != '-');c = gc());
    if(c=='-') {neg=1;c=gc();}
    for(;c>47 && c<58;c = gc()) {x = (x<<1) + (x<<3) + c - 48;}
    if(neg) x=-x;
}
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int r,g,b,m;
        //scanf("%d%d%d%d",&r,&g,&b,&m);
        scanint(r);
        scanint(g);
        scanint(b);
        scanint(m);
        int arr[r],i,a,ans,arb[b],arg[g],maxr=0,maxb=0,maxg=0;
        for(i=0;i<r;i++)
            {
                //scanf("%d",&arr[i]);
                scanint(arr[i]);
                if(arr[i]>maxr)
                    maxr=arr[i];
            }
        for(i=0;i<g;i++)
        {
            //scanf("%d",&arg[i]);
            scanint(arg[i]);
            if(arg[i]>maxg)
                    maxg=arg[i];
        }
        for(i=0;i<b;i++)
            {
                //scanf("%d",&arb[i]);
                scanint(arb[i]);
                if(arb[i]>maxb)
                    maxb=arb[i];
            }
            while(m--)
            {
                //int a=max(maxb,maxr),ans=max(a,maxg);
                if(maxb>=maxr&&maxb>=maxg)
                {
                    maxb/=2;
                }
                else if(maxr>=maxb&&maxr>=maxg)
                {
                    maxr/=2;
                }
                else if(maxg>=maxr&&maxg>=maxb)
                {
                    maxg/=2;
                }
                a=max(maxb,maxr),ans=max(a,maxg);
            }
            printf("%d\n",ans);
    }
    return 0;
}
