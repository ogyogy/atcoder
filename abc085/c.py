N, Y = map(int, input().split())
x = y = z = -1
for i in range(N+1):
    for j in range(N+1):
        k = N - i - j
        if k < 0:
            continue
        if i + j + k != N:
            continue
        if 10000 * i + 5000 * j + 1000 * k == Y:
            x = i
            y = j
            z = k
            break
print(x, y, z)
