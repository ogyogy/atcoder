from collections import Counter
n = int(input())
v = list(map(int, input().split()))
e = []
o = []
for i in range(n):
    if i % 2 == 0:
        e.append(v[i])
    else:
        o.append(v[i])
e_counter = Counter(e)
o_counter = Counter(o)
e_most = e_counter.most_common()
o_most = o_counter.most_common()
E1 = e_most[0][0]
E2 = E1
if len(e_most) > 1:
    E2 = e_most[1][0]
O1 = o_most[0][0]
O2 = O1
if len(o_most) > 1:
    O2 = o_most[1][0]
e_cnt = n // 2 - e.count(E1)
o_cnt = n // 2 - o.count(O1)
if e_cnt == 0 and o_cnt == 0:
    if e[0] == o[0]:
        print(n // 2)
    else:
        print(0)
else:
    if E1 != O1:
        print(e_cnt + o_cnt)
    else:
        if E1 == O2:
            e_cnt = n // 2 - e.count(E2)
            print(e_cnt + o_cnt)
        elif E2 == O1:
            o_cnt = n // 2 - o.count(O2)
            print(e_cnt + o_cnt)
        else:
            cnt1 = n // 2 - e.count(E2) + o_cnt
            cnt2 = e_cnt + n // 2 - o.count(O2)
            print(min(cnt1, cnt2))
