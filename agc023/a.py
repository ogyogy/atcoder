from itertools import accumulate
from collections import Counter
n = int(input())
a = list(map(int, input().split()))
s = [0] + list(accumulate(a))
res = 0
for i in Counter(s).values():
    if i > 1:
        res += i * (i - 1) // 2  # 比較回数
print(res)
