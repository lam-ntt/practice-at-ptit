
def check(s):
    r=s[::-1]
    for i in range(2, len(s)):
        if abs(ord(s[i])-ord(s[i-1]))!=abs(ord(r[i])-ord(r[i-1])): return False
    return True

if __name__=="__main__":
    t=int(input())
    while t!=0:
        s=input()
        if check(s): print("YES")
        else: print("NO")
        t-=1
