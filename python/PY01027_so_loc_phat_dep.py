
ok=False

def check(s):
    if s=="": return True

    global ok
    if s.startswith("688"):
        ok=check(s[3:])
    if ok: return True

    if s.startswith("68"):
        ok=check(s[2:])
    if ok: return True

    if s.startswith("6"):
        ok=check(s[1:])
    if ok: return True
    return False

if __name__=="__main__":
    s=input()
    if check(s): print("YES")
    else: print("NO")