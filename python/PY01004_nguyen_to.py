
from math import*

def checkPrime(n):
    if n<2: return 0
    for i in range(2, int(sqrt(n))+1):
        if n%i==0: return 0
    return 1

def checkCoPrime(i, n):
    while i!=0:
        tmp=n
        n=i
        i=tmp%i
    return n==1

t=int(input())
while t!=0:
    n=int(input())
    count=0
    for i in range(1, n):
        if checkCoPrime(i, n): count+=1
    if checkPrime(count): print("YES")
    else: print("NO")
    t-=1