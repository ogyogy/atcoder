from itertools import accumulate


def E(i, x):
    if i == 1:
        return 5 * x
    return (2 * i + 1) * x


N, X = map(int, input().split())
x = list(map(int, input().split()))
x.sort(key=None, reverse=True)
x = list(accumulate(x))
x.insert(0, 0)
energy = 9223372036854775807
for k in range(1, N + 1):
    cost = (N + k) * X
    for i in range(1, N + 1):
        if i * k <= N:
            cost += E(i, x[i * k] - x[(i - 1) * k])
        else:
            cost += E(i, x[-1] - x[(i - 1) * k])
            break
    if cost < energy:
        energy = cost
print(energy)
