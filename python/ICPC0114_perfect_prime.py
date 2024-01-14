
from math import*

def checkPrime(n):
    if n<2: return False
    for i in range(2, isqrt(n)+1):
        if n%i==0: return False
    return True

def check(n):
    if not checkPrime(n): return False
    r, sum=0, 0
    while n!=0:
        if n%10 not in (2, 3, 5, 7): return False
        r=r*10+n%10
        sum+=n%10
        n//=10
    if not checkPrime(r): return False
    if not checkPrime(sum): return  False
    return True



if __name__=="__main__":
    t=int(input())
    while t!=0:
        n=int(input())
        if check(n): print("Yes")
        else: print("No")
        t-=1