A, B, C = map(int, input().split())
if A + B >= C:
    print(B + C)

else:
    print(B + (A + B + 1))
