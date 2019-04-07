N, M, X, Y = map(int, input().split())
x = list(map(int, input().split()))
y = list(map(int, input().split()))

is_war = False
for Z in range(X + 1, Y + 1):
    if max(x) < Z and min(y) >= Z:
        is_war = True
        break
print('No War') if is_war else print('War')
