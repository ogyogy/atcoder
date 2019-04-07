a, b = map(int, input().split())
res = 'No'
for c in range(1, 4):
    n = a * b * c
    if n % 2 != 0:
        res = 'Yes'
        break
print(res)
