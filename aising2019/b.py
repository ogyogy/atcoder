n = int(input())
a, b = map(int, input().split())
p = list(map(int, input().split()))
res = [0] * 3
for item in p:
    if item <= a:
        res[0] += 1
    elif (item >= (a + 1)) and (item <= b):
        res[1] += 1
    elif item >= (b + 1):
        res[2] += 1
print(min(res))
