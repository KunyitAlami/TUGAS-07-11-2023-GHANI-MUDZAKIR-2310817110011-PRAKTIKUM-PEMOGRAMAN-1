keluar = False

while keluar == False:
    print("\nPilih program\n1. Penjumlahan\n2. Pengurangan\n3. Perkalian\n4. Pembagian\n5. Exit\n")
    pilih_program = int(input("Masukan Pilihan : ", ))


    if pilih_program == 1:
        print("Masukan nilai pertama : ", end=" ")
        nilai1 = int(input())
        print("Masukan nilai kedua : ", end=" ")
        nilai2 = int(input())
        print(f"Hasil pertambahan antara {nilai1:.2f} dengan {nilai2:.2f} adalah {nilai1+nilai2:.2f}\n")

    elif pilih_program == 2:
        print("Masukan nilai pertama : ", end=" ")
        nilai1 = int(input())
        print("Masukan nilai kedua : ", end=" ")
        nilai2 = int(input())
        print(f"Hasil pengurangan antara {nilai1:.2f} dengan {nilai2:.2f} adalah {nilai1-nilai2:.2f}\n")

    elif pilih_program == 3:
        print("Masukan nilai pertama : ", end=" ")
        nilai1 = int(input())
        print("Masukan nilai kedua : ", end=" ")
        nilai2 = int(input())
        print(f"Hasil perkalian antara {nilai1:.2f} dengan {nilai2:.2f} adalah {nilai1*nilai2:.2f}\n")

    elif pilih_program == 4:
        print("Masukan nilai pertama : ", end=" ")
        nilai1 = int(input())
        print("Masukan nilai kedua : ", end=" ")
        nilai2 = int(input())
        print(f"Hasil pembagian antara {nilai1:.2f} dengan {nilai2:.2f} adalah {nilai1/nilai2:.2f}\n")

    elif pilih_program == 5:
        print("Terimakasih, telah menggunakan kalkulator Ghani Mudzakir")
        keluar = True

    else:
        print("Input anda salah, silahkan coba lagi")
    

