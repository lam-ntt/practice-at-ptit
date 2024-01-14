

def check(n, s):
    if len(n)>len(s): return 0
    if n==s[:len(n)]:
        return 1+check(n, s[len(n):])
    else:
        return check(n, s[1:])

if __name__=="__main__":
    t=int(input())
    while t!=0:
        s=input()
        n=input()
        print(check(n, s))
        t-=1
