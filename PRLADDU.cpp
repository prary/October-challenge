#include<bits/stdc++.h>
long long int read_int(){
	char r;
	bool start=false,neg=false;
	long long int ret=0;
	while(true){
		r=getchar();
		if((r-'0'<0 || r-'0'>9) && r!='-' && !start){
			continue;
		}
		if((r-'0'<0 || r-'0'>9) && r!='-' && start){
			break;
		}
		if(start)ret*=10;
		start=true;
		if(r=='-')neg=true;
		else ret+=r-'0';
	}
	if(!neg)
		return ret;
	else
		return -ret;
}
long long pos(long long po,long long arr[],long long n)
{
    long long i;
    for(i=po;i<n;i++)
        if(arr[i]>0)
        return i;
    return 0;
}
long long neg(long long ne,long long arr[],long long n)
{
    long long i;
    for(i=ne;i<n;i++)
        if(arr[i]<0)
        return i;
    return 0;
}
int main()
{
    long long t;
    scanf("%lld",&t);
    while(t--)
    {
        long long n,i=0,s=0,po=0,ne=0;
        scanf("%lld",&n);
        long long arr[n];
        while(i<n)
        {
            //scanf("%lld",&arr[i]);
            arr[i]=read_int();
            i++;
        }
        po=pos(po,arr,n);
        ne=neg(ne,arr,n);
        for(i=0;i<n;)
        {
            if(abs(arr[po])==abs(arr[ne]))
                {
                    s=s+abs(po-ne)*arr[po];
                    arr[po]=0;
                    arr[ne]=0;
                    po=pos(po+1,arr,n);
                    //if(!neg(ne+1,arr,n))
                    ne=neg(ne+1,arr,n);
                    if(!po)
                    break;
                    if(!ne)
                    break;

                    i++;
                }
            else if(arr[po]>abs(arr[ne]))
            {
                //prlong longf("%lld %lld else if\n",po,ne);
                s=s+abs(arr[ne])*abs(po-ne);
                arr[po]+=arr[ne];
                arr[ne]=0;
                ne=neg(ne+1,arr,n);
                if(!ne)
                break;

                i++;
            }
            else if(arr[po]<abs(arr[ne]))
            {
                //printf("%lld %lld else\n",po,ne);
                s=s+abs(po-ne)*(arr[po]);
                arr[ne]+=arr[po];
                arr[po]=0;
                po=pos(po+1,arr,n);
                if(!po)
                break;

                i++;
            }
        }
        printf("%lld\n",s);
    }
    return 0;
}
