#include <stdio.h>
#include <math.h>
int main()


{
   int n;
   int i=2;
   int count=0;
   scanf("%d",&n);
   while(i <= sqrt(n))
    {
        if(n%i==0) {
            printf("%d,",i);
            count++;
            if (i != (n / i)) {
                printf("%d,",n/i);            
                count++;
            }
        }

        i++;
    }
    printf("\nnumber of divisior %d\n",count);
   return 0;
}