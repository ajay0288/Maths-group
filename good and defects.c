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
    int A,B,C,res1,res2,res3,res4,samplespace;
    int t,i,j;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
       scanf("%d %d %d",&A,&B,&C);
       samplespace=A+B+C;
       float ex1=(float) (((combination(A,1)/combination(samplespace,1))*(combination(B+C,1)/combination(samplespace-1,1)))*2);
printf("P(both computers are good)=%.4f\n",combination(A,2)/combination(samplespace,2));
       printf("P(both computers have Major Defect)=%.4f\n",combination(C,2)/combination(samplespace,2));
       printf("P(atleast One computer is good)=%.4f\n",ex1/2+(combination(A,2)/combination(samplespace,2)));
       printf("P(atmost one computer is good)=%.4f\n",(ex1/2+(combination(B+C,2)/combination(samplespace,2))));
       printf("P(exactly one computer is good)=%.4f\n",ex1/2);
       printf("P(no computer has major effect)=%.4f\n",(combination(A+B,2)/combination(samplespace,2)));
       printf("P(no computer is good)=%.4f\n",combination(B+C,2)/combination(samplespace,2));
    }
}
