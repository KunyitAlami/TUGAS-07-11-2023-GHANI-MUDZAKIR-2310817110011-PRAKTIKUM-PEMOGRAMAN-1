nilai_gsn_baris, nilai_gsn_dikali = input().split()
nilai_gsn_baris = int(nilai_gsn_baris)
nilai_gsn_dikali = int(nilai_gsn_dikali)


hasil_total = 0
for x in range(1, nilai_gsn_baris+1):
    hasil_perbaris = 0
    print("(", end= " ")

    for y in range(x, 0, -1):
        hasil_perbaris += y * nilai_gsn_dikali
        print(f"{y} * {nilai_gsn_dikali}", end= " ")
        if y>1:
            print(" + ", end=" ")

    hasil_total += hasil_perbaris
    print(f") = {hasil_perbaris}")
print(f"{hasil_total}")




