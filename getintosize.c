#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
     int t,n,k,i,j,out;
     scanf("%d",&t);
    for(out=0;out<t;out++)
    {
        int samplespace,possible=0;
        scanf("%d %d",&n,&k);
        int s[n];
        for(i=0;i<n;i++)
            scanf("%d",&s[i]);
        samplespace=n*n;
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                if(abs((i+1)-(j+1))<=k&&s[i]==1&&s[j]==1)
                {
                     possible++;
                }

            }
        }
        if(possible==0)
        {
            printf("0/1");
        }
        else
            printf("%d/%d\n",possible,samplespace);
    }
    return 0;
}z
