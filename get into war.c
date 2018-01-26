#include<stdio.h>
main()
{
    float an,ad,bn,bd,cn,cd,noone;
    int t,i,j;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%f %f",&an,&ad);
        scanf("%f %f",&bn,&bd);
        scanf("%f %f",&cn,&cd);

        printf("P(none of them is taken into consideration)=%.4f\n",(1-(an/ad))*(1-(bn/bd))*(1-(cn/cd)));
        noone=(1-(an/ad))*(1-(bn/bd))*(1-(cn/cd));
        printf("P(atleast one of them is taken into consideration=%.4f\n",1-noone);
    }
}
