#include <stdio.h>

int main()
{
    int nilai1, nilai2;
    int nilai_batas;

    scanf("%d %d", &nilai1, &nilai2);
    nilai_batas = (nilai1-nilai2);    
    if (nilai_batas <0)
    {
        nilai_batas = nilai_batas*-1;
    for (int i = 0; i <= nilai_batas; i++)
    {
        int j = 1;

        printf("%d-%d ", nilai1, nilai2);

        nilai1 = nilai1+j;
        nilai2 = nilai2-j;

    }
    }
    else{
    for (int i = 0; i <= nilai_batas; i++)
        {
            int j = 1;

            printf("%d %d  ", nilai1, nilai2);

            nilai1 = nilai1-j;
            nilai2 = nilai2+j;
        }
   
    }
    

    return 0;
}


    





