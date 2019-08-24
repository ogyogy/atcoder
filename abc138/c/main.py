n = int(input())
v = list(map(int, input().split()))
v.sort()
while True:
    if len(v) == 1:
        print(v[0])
        break
    tmp = v.pop(0)
    v[0] = (v[0] + tmp) / 2
