#include<stdio.h>
float combination(int n,int r)
{
    float i,mul=1;
    for(i=0;i<r;i++)
    {
        mul=mul*n;
        n=n-1;
    }
    return mul/fact(r);
}

int fact(int n)
{
    int res=1;
    int i;
    for(i=1;i<=n;i++)
    {
      res=res*i;
    }
    return res;
}

main()
{
    int n,m,count;
    int full;
    scanf("%d %d",&n,&m);
    count=(n*(m-1))+m*(n-1);
    printf("%d\n",count);
    full=n*m;
    printf("%.4f",count/combination(full,2));

}
