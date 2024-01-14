
from math import*

def checkPrime(n):
    if n<2: return False
    for i in range(2, isqrt(n)+1):
        if n%i==0: return False
    return True

if __name__=="__main__":
    n=int(input())
    a=list(map(int, input().split()))

    dct=dict()
    for i in a:
        if checkPrime(i):
            if i not in dct:
                dct[i]=1
            else:
                dct[i]+=1
    for i in a:
        if i in dct and dct[i]!=0:
            print(i, dct[i])
            dct[i]=0
