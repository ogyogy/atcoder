S = input()

res = 0
for i in range(0, len(S) - 2):
    n = int(S[i:i + 3])
    if abs(753 - res) > abs(753 - n):
        res = n
print(abs(753-res))
