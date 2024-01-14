from math import*

N=1000000
p=[1 for _ in range(0, N+1)]

def checkPrime(n):
    if n<2: return False
    for i in range(2, isqrt(n)+1):
        if n%i==0: return False
    return True

def init():
    p[0], p[1]=0, 0
    for i in range(2, isqrt(N)):
        if checkPrime(i):
            for j in range(2*i, N+1, i):
                p[j]=0

def reverse(n):
    res=0
    while n!=0:
        res=res*10+n%10
        n//=10
    return res

if __name__=="__main__":
    init()
    t=int(input())
    while t!=0:
        n=int(input())
        cnt=0
        se=set()
        for i in range(13, n):
            ii=reverse(i)
            if i!=ii and ii<n and i not in se and p[i] and p[ii]:
                print(i, ii, end=" ")
                se.add(ii)
        print()
        t-=1
