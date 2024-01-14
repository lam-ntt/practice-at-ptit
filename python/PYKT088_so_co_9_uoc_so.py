
from math import*

a=[1 for _ in range(32000)]

def checkPrime(n):
    if n<2: return False
    for i in range(2, isqrt(n)+1):
        if n%i==0: return False
    return True

def initSieve():
    a[0], a[1]=0, 0
    for i in range(2, isqrt(32000)):
        if checkPrime(i):
            for j in range(2*i, 32000, i): a[j]=0

def count(n):
    cnt=0
    for i in [2, 3, 5, 7, 11, 13]:
        if pow(i, 8)<=n:
            cnt+=1
    tmp=isqrt(n)
    for i in range(2, tmp+1):
        for j in range(2, isqrt(i)+1):
            if i%j==0 and a[j] and a[i//j] and j<i//j:
                cnt+=1
    return cnt

if __name__=="__main__":
    initSieve()
    n=int(input())
    print(count(n))