    #include<bits/stdc++.h>
    #define M 1000000009
    #define gc getchar_unlocked

void scanint (long long  &x)
{
    register long long  c = gc();
    x = 0;
    long long  neg = 0;
    for(;((c<48 || c>57) && c != '-');c = gc());
    if(c=='-') {neg=1;c=gc();}
    for(;c>47 && c<58;c = gc()) {x = (x<<1) + (x<<3) + c - 48;}
    if(neg) x=-x;
}
    int  main()
    {
        long long  t,n,m,b;
        scanf("%lld",&t);
        while(t--)
        {
            //scanf("%d%d",&n,&m);
            scanint(n);
            scanint(m);
            char c,arr[n];
            memset(arr,'0',sizeof(arr));
            while(m--)
            {
                scanf("\n%c",&c);
                scanint(b);
                arr[b-1]=c;
            }
            long long  cur=0,pre=0,count=1,i;
            for(i=0;i<n;i++)
            {
                if(isalpha(arr[i]))
                {
                    cur=i;
                    if(pre!=cur&&arr[cur]!=arr[pre]&&arr[pre]!='0')
                    {
                        count=((count%M)*(cur-pre)%M)%M;
                    }
                    //pre=cur;
                    //prlong long f("%d %d %d\n",pre,cur,count);
                    pre=cur;
                }
            }
            printf("%lld\n",count);
        }
        return 0;
    }
