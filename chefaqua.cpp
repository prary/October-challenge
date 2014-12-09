    #include<bits/stdc++.h>
    using namespace std;
    pair<int,int> arr[2010];
    int pr[4000000]={0};
    int n;
    int foo(int p,int sx,int sy,int a,int b)
    {
        int low=0,high=n-1,middle,x,y,count=0,pa,pa2,sl,slo;
        while(low<=high)
        {
            middle=(low+high)/2;
            x=arr[middle].first;
            y=arr[middle].second;
            pa=(a-x)*(a-x)+(b-y)*(b-y);
            if(pa==p)
            {
                sl=(a-x)*sx;
                slo=(b-y)*sy;
                slo=-1*slo;
                if(sl==slo)
                    {
                        //printf("x=%d y=%d ",x,y);

                        return 1;
                    }
                else
                {
                    low=middle+1;
                }
            }
            else if(pa>p)
            {
                high=middle-1;
            }
            else
            {
                low=middle+1;
            }
            //printf("Hell\n");
        }
        return 0;
    }
    int main()
    {
        int i,m=2,a,b,e=0,mi=10,c,d,j,sy,sx,f,p,flag=0;
        scanf("%d",&n);
        for(i=0;i<n;i++)
            scanf("%d%d",&arr[i].first,&arr[i].second);
        sort(arr,arr+n);

        if(n==0)
        {
            printf("4\n");
            return 0;
        }
        if(n==1)
        {
            printf("3\n");
            return 0;
        }
        //for(i=0;i<n;i++)
        //printf("%d %d\n",arr[i].first,arr[i].second);
        for(i=0;i<=n-1;i++)
        {
            //flag=1;
            m=2;
            a=arr[i].first;
            b=arr[i].second;
            //printf("a= %d b=%d ",a,b);
            for(j=i;j<n;j++)
            {
                c=arr[j].first;
                d=arr[j].second;
                p=(a-c)*(a-c)+(b-d)*(b-d);
                sy=b-d;sx=a-c;m=2;

                if(p!=0)
                {
                    flag=1;
                    f=foo(p,sx,sy,a,b);
                    if(f==1)
                    {
                        m=m-1;
                        //printf("a= %d b=%d m=%d\n",a,b,m);
                    }
                    f=foo(p,sx,sy,c,d);
                    if(f==1)
                    {
                        m=m-1;
                        //printf("c=%d d=%d m=%d\n",c,d,m);
                    }
                    if(m==0)
                    {
                        printf("0\n");
                        return 0;
                        //break;
                    }
                }
                pr[e++]=m;
            }

        }
        if(flag==0)
            mi=max(m,3);
        else
        {
             mi=10;
            for(i=0;i<e;i++)
            if(pr[i]<mi&&pr[i]>=0)
                mi=pr[i];
              //printf("%d ",mi);
        }
        printf("%d\n",mi);
        return 0;
    }
