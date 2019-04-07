n = int(input())
a = list(map(int, input().split()))
res = 0
new_color = max(a) + 1
cnt = 1
for i in range(len(a)-1):
    next_slime = a[i + 1]
    if next_slime == a[i]:
        cnt += 1
    else:
        res += (cnt // 2)
        cnt = 1
if cnt > 0:
    res += (cnt // 2)
print(res)
