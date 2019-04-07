n = int(input())
if n % 10 == 0:
    print(10)
else:
    str_n = str(n)
    res = 0
    for i in range(len(str_n)):
        res += int(str_n[i])
    print(res)
