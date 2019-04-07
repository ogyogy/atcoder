n = int(input())
w = []
res = 'Yes'
prev = ''
# input
for i in range(n):
    w.append(input())
# 複数回発言をチェック
for word in w:
    if w.count(word) > 1:
        res = 'No'
        break
# w[i]の末尾とw[i+1]の先頭が同じならNo
for i in range(n):
    if i == 0:
        prev = w[i]
    else:  # i > 0
        if prev[-1] != w[i][0]:
            res = 'No'
            break
        prev = w[i]
print(res)
