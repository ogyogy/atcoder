def get_alphabet_num(s):
    return ord(s) - ord('a')


R = [-1] * 26
R_ = [-1] * 26
for s, t in zip(input(), input()):
    si = get_alphabet_num(s)
    ti = get_alphabet_num(t)
    if R[si] >= 0:
        # R[Si] >= 0 ならば R[Si] が Ti に等しいことを検査する
        if R[si] == ti:
            pass
        else:
            print('No')
            exit()
    if R_[ti] >= 0:
        # R_[Ti] >= 0 ならば R_[Ti] が Si に等しいことを検査する
        if R_[ti] == si:
            pass
        else:
            print('No')
            exit()
    # R[Si] < 0 ならば R[Si] := Ti とする
    R[si] = ti
    # R_[Ti] < 0 ならば R_[Ti] := Si とする
    R_[ti] = si
print('Yes')
