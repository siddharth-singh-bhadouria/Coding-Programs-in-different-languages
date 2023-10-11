def fl(s):
    st=""
    length = len(s)
    if (length <2):
        return st
    else:
        st = s[0]+s[1]+s[length-2]+s[length-1]
        return st


s = input ('enter string:')
s_new = fl(s)
print(s_new)