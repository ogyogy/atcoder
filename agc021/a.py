N = input()
K = len(N)
c = int(N[0])
if N[1:] == (K - 1) * '9':
    print(c + 9 * (K - 1))
else:
    print((c - 1) + 9 * (K - 1))
