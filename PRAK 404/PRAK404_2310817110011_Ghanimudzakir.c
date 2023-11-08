#include <stdio.h>
#include <stdbool.h>

int main()
{
    bool keluar = false;
    int pilih_program;
    float nilai1, nilai2;
    while (keluar== false)
    {
        printf("\nPilih program\n1. Penjumlahan\n2. Pengurangan\n3. Perkalian\n4. Pembagian\n5. Exit\n");
        printf("Masukan Pilihan : ");
        scanf("%d", &pilih_program);

        if (pilih_program == 1)
        {
            printf("Masukan nilai pertama : ");
            scanf("%f", &nilai1);
            printf("Masukan nilai kedua : ");
            scanf("%f", &nilai2);
            printf("Hasil pertambahan antara %.2f dengan %.2f adalah %.2f\n", nilai1, nilai2, nilai1+nilai2);
        }
        else if (pilih_program == 2)
        {
            printf("Masukan nilai pertama : ");
            scanf("%f", &nilai1);
            printf("Masukan nilai kedua : ");
            scanf("%f", &nilai2);
            printf("Hasil pengurangan antara %.2f dengan %.2f adalah %.2f\n", nilai1, nilai2, nilai1-nilai2);
        }   
        else if (pilih_program == 3)
        {
            printf("Masukan nilai pertama : ");
            scanf("%f", &nilai1);
            printf("Masukan nilai kedua : ");
            scanf("%f", &nilai2);
            printf("Hasil perkalian antara %.2f dengan %.2f adalah %.2f\n", nilai1, nilai2, nilai1*nilai2);
        }    
        else if (pilih_program == 4)
        {
            printf("Masukan nilai pertama : ");
            scanf("%f", &nilai1);
            printf("Masukan nilai kedua : ");
            scanf("%f", &nilai2);
            printf("Hasil pembagian antara %.2f dengan %.2f adalah %.2f\n", nilai1, nilai2, nilai1/nilai2);
        }
        else if (pilih_program == 5)
        {
            printf("Terimakasih, telah menggunakan kalkulator Ghani Mudzakir");
            keluar =  true;
        }
        else{
        printf("Input anda salah, silahkan coba lagi.");
        }
    }
    

    return 0;
}



