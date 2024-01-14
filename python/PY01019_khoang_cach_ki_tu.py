
def check(s, r):
    for i in range(1, len(s)):
        if abs(ord(s[i])-ord(s[i-1]))!=abs(ord(r[i])-ord(r[i-1])): return False
    return True

if __name__=="__main__":
    t=int(input())
    while t!=0:
        s=input()
        r=s[::-1]
        if check(s, r): print("YES")
        else: print("NO")
        t-=1
