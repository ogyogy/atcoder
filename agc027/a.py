n, x = map(int, input().split())
a = list(map(int, input().split()))
a.sort()
if x < min(a):
    # print('x < min(a)')
    print(0)
    exit()
res = 0  # 喜ぶ子供の人数
cnt = 0  # お菓子を配った子供の数
for i in range(len(a)):
    if x >= a[i]:
        # お菓子を配る
        res += 1
        x -= a[i]
        cnt += 1
        # print('a[i], x = ', a[i], x)
    else:
        break
if x > 0:
    # print('x > 0')
    # まだもらっていない子供がいるならその子供に配る
    # そうでないなら既にもらった子供に配る-->喜ぶ子供が1人減る
    if cnt >= n:
        # print('cnt >= n')
        res -= 1
print(res)
