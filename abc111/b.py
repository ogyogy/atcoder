N = int(input())
contests = [111, 222, 333, 444, 555, 666, 777, 888, 999]
for x in contests:
    if N <= x:
        print(x)
        break
