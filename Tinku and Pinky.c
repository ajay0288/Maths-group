#include<stdio.h>
#include<math.h>
main()
{
    float t,p;
    char let;
    scanf("%f %f",&t,&p);
      scanf("%d",&let);
    if(p>=1&&p<=26)
    {
    printf("%.4f",ceil((t/2))/(t*p));
    }
    else
    {
        printf("Dingu You are Cheat");
    }
}
