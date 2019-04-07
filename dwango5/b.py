N, K = map(int, input().split())
a = list(map(int, input().split()))
selected = [0] * K
for i in range(N):
    a_sub = a[i:]
    if sum(a_sub[:len(a_sub)]) < min(selected):
        break
    for j in reversed(range(0, len(a_sub))):
        a_sub_sub = a_sub[:j + 1]
        a_sub_sub_sum = sum(a_sub_sub)
        if a_sub_sub_sum > min(selected):
            selected[selected.index(min(selected))] = a_sub_sub_sum
        else:
            break
res = selected[0]
for i in range(1, K):
    res = res & selected[i]
print(res)
