a, b = input().split()
a = int(a)
i = 1

for x in range(1,51):
    if x%a == 0:
        print(f"{b}", end= " ")
    else:
        print(f"{ x }",end=" " )
    



