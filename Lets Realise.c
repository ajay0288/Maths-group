#include<stdio.h>
main()
{
    float t,n,m,l,p,q,r;
    float b1,b2,b3,ab1,ab2,ab3;
    scanf("%f",&t);
    scanf("%f %f %f",&n,&m,&l);
    scanf("%f %f %f",&p,&q,&r);
    if(n+m+l==t)
    {
    n=n/100;
    m=m/100;
    l=l/100;
    p=p/100;
    q=q/100;
    r=r/100;
    b1=n*p;
    b2=m*q;
    b3=l*r;
    float total_probability = b1+b2+b3;
    printf("p(college A)=%.4f\n",b1/total_probability);
    printf("p(college B)=%.4f\n",b2/total_probability);
    printf("p(college C)=%.4f",b3/total_probability);
    }
    else
        printf("Sorry ! Wrong information");

}
