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


if __name__=="__main__":
    init()
    t=int(input())
    while t!=0:
        n=int(input())
        cnt=0
        for i in range(2, n-6):
            if p[i] and (p[i+2] or p[i+4]) and p[i+6]:
                cnt+=1
        print(cnt)
        t-=1
