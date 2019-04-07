import functools
import math
import fractions
n, x = map(int, input().split())
xx = list(map(int, input().split()))  # x1 x2 ... xn
xx.append(x)
xx.sort()
diff = []  # 隣接する都市の距離を保存
d = 0
if len(xx) > 2:
    for i in range(1, len(xx)):
        diff.append(abs(xx[i - 1] - xx[i]))
    d = functools.reduce(fractions.gcd, diff)
else:
    d = abs(xx[0] - xx[1])
print(d)
