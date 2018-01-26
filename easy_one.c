#include<stdio.h>
#include<math.h>
main()
{
    int t;
    scanf("%d",&t);
    int i;
    float samplespace,n,m;
    for(i=0;i<t;i++)
    {
        scanf("%f %f",&n,&m);
        if(n>=2&&m>=2)
        {
            samplespace=pow(m,n);
            printf("%.4f\n",1-(m/samplespace));
        }
        else
            printf("constraint failed");
    }
}
