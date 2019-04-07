N, T = map(int, input().split())
c = [0] * N
t = [0] * N
c_min = 10000
for i in range(N):
    c[i], t[i] = map(int, input().split())
    if c[i] <= c_min and t[i] <= T:
        c_min = c[i]
print(c_min) if c_min != 10000 else print('TLE')
