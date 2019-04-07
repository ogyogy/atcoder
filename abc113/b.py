n = int(input())
t, a = map(int, input().split())
h = list(map(int, input().split()))
dmin = 10 ** 9
res = -1
for i in range(n):
    x = h[i]
    avg = t - x * 0.006
    d = abs(a - avg)
    if d < dmin:
        dmin = d
        res = i + 1  # indexは0から始まるので+1
print(res)
