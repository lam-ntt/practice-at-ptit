
from math import*

def checkPrime(n):
    if n<2: return False
    for i in range(2, isqrt(n)+1):
        if n%i==0: return False
    return True

def check(n):
    for i in range(len(n)):
        if checkPrime(i)!=checkPrime(ord(n[i])-ord('0')): return False
    return True

if __name__=="__main__":
    t=int(input())
    while t!=0:
        n=input()
        if check(n): print("YES")
        else: print("NO")
        t-=1
