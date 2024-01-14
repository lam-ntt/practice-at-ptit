
from math import*

N=8000
p=[1 for _ in range(N+1)]

def checkPrime(n):
    if n<2: return False
    for i in range(2, isqrt(n)+1):
        if n%i==0: return False
    return True

def init():
    p[0], p[1]=0, 0
    for i in range(2, isqrt(N)+1):
        if checkPrime(i):
            for j in range(i*i, N+1, i):
                p[j]=0


if __name__=="__main__":
    init()
    n, x=map(int, input().split())

    cnt=0
    a=[0]
    for i in range(N+1):
        if p[i]:
            cnt+=1
            a.append(i)
        if cnt==n: break

    for i in range(1, n+1):
        a[i]=a[i]+a[i-1]
    for i in range(0, n+1):
        print(x+a[i], end=" ")
