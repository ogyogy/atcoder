N = int(input())
a = list(map(int, input().split()))
a_avg = sum(a) / len(a)
ai_min = 0  # 最も小さいフレーム番号
d_min = abs(a[0] - a_avg)  # ai_minが持つ平均値との距離
for i in range(1, N):
    d = abs(a[i] - a_avg)
    if d < d_min:
        ai_min = i
        d_min = d
print(ai_min)
