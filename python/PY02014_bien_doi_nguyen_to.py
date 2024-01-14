
from math import*

p=[]

def checkPrime(n):
    if n<2: return False
    for i in range(2, isqrt(n)+1):
        if n%i==0: return False
    return True

def init():
    f=[1 for _ in range(250)]
    f[0], f[1]=0, 0
    for i in range(2, isqrt(250)):
        if checkPrime(i):
            for j in range(2*i, 250, i):
                f[j]=0

    for i in range(250):
        if f[i]: p.append(i)

def findl(l, r, value):
    if l>r: return -1
    m=(l+r)//2
    if p[m]<=value:
        tmp=findl(m+1, r, value)
        if tmp==-1: return m
        else: return tmp
    else:
        return findl(l, m-1, value)

def findr(l, r, value):
    if l>r: return -1
    m=(l+r)//2
    if p[m]>=value:
        tmp=findr(l, m-1, value)
        if tmp==-1: return m
        else: return tmp
    else:
        return findr(m+1, r, value)

if __name__=="__main__":
    n=int(input())
    a=list(map(int, input().split()))

    init()
    cnt=0
    for i in a:
        if i<=p[0]:
            tmp=p[0]-i
        else:
            tmp=min(i-p[findl(0, 53, i)], p[findr(0, 53, i)]-i)
        cnt=max(cnt, tmp)
    print(cnt)




