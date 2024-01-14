
def gcd(n, m):
    if n<m: n, m=m, n
    while m!=0:
        tmp=n
        n=m
        m=tmp%m
    return n

if __name__=="__main__":
    t = int(input())
    while t != 0:
        n = int(input())
        m = int(str(n)[::-1])
        if gcd(n, m)==1: print("YES")
        else: print("NO")
        t -= 1
