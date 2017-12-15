#include<stdio.h>
main()
{
    float t,an,ad,bn,bd,cn,cd,dn,dd,temp,i,j,mul;
    float samplespace;
    scanf("%f",&t);
    for(i=0;i<t;i++)
    {
        int flag=0;
        scanf("%f %f",&an,&ad);
        scanf("%f %f",&bn,&bd);
        if(bn>bd)
          flag=1;
        scanf("%f %f",&cn,&cd);
        if(cn>cd)
          flag=1;
        scanf("%f %f",&dn,&dd);
        if(dn>dd)
          flag=1;
        mul=bd*cd*dd;
        if(flag==0)
        {
    samplespace=(((mul/bd)*bn)+((mul/cd)*cn)-((mul/dd)*dn))/mul;
    printf("%.4f",samplespace);
        }
        else
            printf("error!numerator level exceeds the sample space");
    }

}
