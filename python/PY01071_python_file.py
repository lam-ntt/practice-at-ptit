
def check(s):
    s=s.lower()
    if not(s.endswith(".py")): return False
    for i in range(len(s)):
        if not(s[i]=='.' or s[i]=='_' or s[i].isalpha()): return \
            False
    return True

if __name__=="__main__":
    s=input()
    if check(s): print("yes")
    else: print("no")