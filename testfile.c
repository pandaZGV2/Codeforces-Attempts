#include <stdio.h>
int main(void)
{
        int c[10]={1,[2]=20,[4]=40,3,4,5};
        for(int i=0;i<10;i++)
        {
            printf("%d\n",c[i]);
        }
return 0;
}