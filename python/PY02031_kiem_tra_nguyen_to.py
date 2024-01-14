from math import *

def checkPrime(n):
    if n<2: return 0
    for i in range(2, isqrt(n)+1):
        if n%i==0: return 0
    return 1

if __name__=="__main__":
    n, m=map(int, input().split())
    a=[]
    for i in range(0, n):
        tmp=list(map(int, input().split()))
        a.append(tmp)

    for i in a:
        for j in i:
            print(checkPrime(j), end=" ")
        print()
            
