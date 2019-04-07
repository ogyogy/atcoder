n, m = map(int, input().split())
data = [0] * m
res = [0] * m
for i in range(m):
    d = list(map(int, input().split()))
    d.append(i)
    data[i] = tuple(d)
data.sort()
city_num = data[0][0]
birth_num = 1
for item in data:
    if item[0] != city_num:
        city_num = item[0]
        birth_num = 1
    res[item[2]] = '{:06d}{:06d}'.format(item[0], birth_num)
    birth_num += 1
for item in res:
    print(item)
