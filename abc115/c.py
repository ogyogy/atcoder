N, K = map(int, input().split())
h = [0] * N
for i in range(N):
    h[i] = int(input())
h.sort()
d_min = h[-1] - h[0]
# print(h)
# print(d_min)
for i in range(0, N - K + 1):
    h_min = h[i]
    h_max = h[i + K - 1]
    d = h_max - h_min
    # print(i, h_min, h_max, d)
    if d < d_min:
        d_min = d
    # print('min=', d_min)
print(d_min)
