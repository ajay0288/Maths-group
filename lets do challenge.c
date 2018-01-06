#include<stdio.h>
main()
{
    int n,m,i;
    float a,b,avg=0,per=0,dol=0;
    scanf("%d",&n);
    scanf("%d",&m);
    for(i=0;i<m;i++)
    {
      scanf("%f %f",&a,&b);
      per=per+a;
      if(b<0||b>99)
      {
          dol=1;
      }
      avg=avg+((b/100)*(a/n));
    }
    if(per>n)
    {
        printf("Sorry person exceeds\n");
    }
    if(dol==1)
    {
        printf("Dollar Value Exceeds");
    }
    if(per<=n&&dol==0)
    {
          printf("%.3f",avg);
    }

}
