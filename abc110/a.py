l = list(map(int, input().split()))
l.sort()
l.reverse()
print(l[0] * 10 + l[1] + l[2])
