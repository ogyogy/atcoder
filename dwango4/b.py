s = input()
if not s.count('2') == s.count('5'):
    print(-1)
    exit()

res = 0
while True:
    s = s.replace('25', '')
    res += 1
    if len(s) == 0:
        print(res)
        break
    elif not s[0] == '2':
        print(-1)
        break
