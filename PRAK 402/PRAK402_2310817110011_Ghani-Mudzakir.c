#include <stdio.h>

int main()
{
    int nilai_Awal;
    scanf("%d", &nilai_Awal);
    int i,j;
    for (i = 1; i <=nilai_Awal; i++)
    {
        if (i%2 !=0)
        {
            printf("%d ", i);
        }else{
            continue;
        
    }

    }
    printf("\n");
    for (j = nilai_Awal; j > 0; j--)
    {

        if (j%2 ==0)
        {
            printf("%d ", j);
        }

    }
    
    return 0;
}



