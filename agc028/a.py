import fractions


n, m = map(int, input().split())
s = input()
t = input()

# 先頭文字が一致しない場合はよい文字列は存在しないので終了
if s[0] != t[0]:
    print(-1)
    exit()

# よい文字列が存在する場合、答えは最小公倍数となる
l = (n * m) // fractions.gcd(n, m)

# 連結するとSになるXの位置リストを生成
ss = set(l // n * i for i in range(1, n))
# 連結するとTになるXの位置リストを生成
tt = set(l // m * i for i in range(1, m))

# 共通部分を取得
same = list(ss & tt)

# メモリ開放
del ss
del tt

a = [s[item // (l // n)] for item in same]
b = [t[item // (l // m)] for item in same]

print(l) if a == b else print(-1)
