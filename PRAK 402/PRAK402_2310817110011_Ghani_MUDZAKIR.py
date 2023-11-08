nilai_awal = int(input())

for x in range (1, nilai_awal+1):
    if x%2 !=0:
        print(x, end= " ")
    else:
        continue

print("\n")
for z in range (nilai_awal, 0,-1):
    if z%2 ==0:
        print(z, end= " ")

    else:
        continue

