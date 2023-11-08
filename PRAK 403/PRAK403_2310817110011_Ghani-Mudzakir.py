nilai1, nilai2 = input().split()
nilai1 = int(nilai1)
nilai2 = int(nilai2)

nilai_batas = nilai1-nilai2

if nilai_batas<0:
    nilai_batas = nilai_batas*(-1)
    for x in range(-1,nilai_batas):
        i = 1
        print(f"{nilai1}-{nilai2} ", end=" ")
        nilai1 += i
        nilai2 -= i
elif nilai_batas>0:
    for x in range(-1,nilai_batas):
        i = 1
        print(f"{nilai1}-{nilai2} ", end=" ")
        nilai1 -= i
        nilai2 += i




