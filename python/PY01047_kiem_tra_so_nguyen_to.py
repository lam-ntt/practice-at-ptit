
from math import *

def checkPrime(n):
    if n<2: return False
    for i in range(2, int(sqrt(n))+1):
        if n%i==0: return False
    return True

if __name__=="__main__":
    t=int(input())
    while t!=0:
        n=input()
        if checkPrime(int(n[len(n)-4:])): print("YES")
        else: print("NO")
        t-=1
