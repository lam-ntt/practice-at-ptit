
from math import*

def checkPrime(n):
    if n<2: return False
    for i in range(2, isqrt(n)+1):
        if n%i==0: return False
    return True

if __name__=="__main__":
    n=int(input())
    a=list(map(int, input().split()))

    p=[i for i in a if checkPrime(i)]
    p=sorted(p)

    cnt=0
    for i in a:
        if i in p:
            print(p[cnt], end=" ")
            cnt+=1
        else:
            print(i, end=" ")

