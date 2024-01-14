
def count(t, s):
    if len(s)<len(t): return 0
    if s[:len(t)]==t: return 1+count(t, s[len(t):])
    else: return count(t, s[1:])

if __name__=="__main__":
    t=int(input())
    while t!=0:
        s=input()
        ss=input()
        print(count(ss, s))
        t-=1
