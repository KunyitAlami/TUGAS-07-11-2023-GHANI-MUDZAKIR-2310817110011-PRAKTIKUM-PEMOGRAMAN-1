#include <stdio.h>

int main()
{
    int yang_diskip;
    char pengganti_yang_diskip;
    scanf("%d %c", &yang_diskip, &pengganti_yang_diskip);

    int i;
    for (i = 1; i <= 50; i++)
    {
       if (i%yang_diskip==0)
       {
        printf("%c ", pengganti_yang_diskip);
       }
       else{
        printf("%d ", i);
       }
       
    }
    
    return 0;
}



