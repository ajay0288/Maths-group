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
    float t,a,b,c,d,e,f,g,i,j,samplespace;
    scanf("%f",&t);
    for(i=0;i<t;i++)
    {
        scanf("%f %f %f %f %f %f %f",&a,&b,&c,&d,&e,&f,&g);
        printf("P(getting fruits)=%.4f\n",(b+e+g)/(a+b+c+d+e+f+g));
        samplespace=b+e+g;
        printf("P(eatting same fruit)=%.4f\n",(combination(b,2)+combination(e,2)+combination(g,2))/combination(samplespace,2));
        b=b-2;/*removing two mangoes*/
        samplespace=samplespace-2;
        if(b>=3)
        printf("P(getting different fruit)=%.4f\n",(((combination(b,1)*combination(e,1))+(combination(e,1)*combination(g,1)+(combination(g,1)*combination(b,1))))/combination(samplespace,2)));
        else
            printf("require more mangoes\n");
    }
}
