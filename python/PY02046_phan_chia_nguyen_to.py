
from math import*

def checkPrime(n):
    if n<2: return False
    for i in range(2, isqrt(n)+1):
        if n%i==0: return False
    return True

if __name__=="__main__":
    n=int(input())
    a=list(map(int, input().split()))

    b=[]
    for i in a:
        if i not in b:
            b.append(i)

    i, sl, sr, ok=0, b[0], sum(b[1:]), 0
    while i!=len(b)-1:
        if checkPrime(sl) and checkPrime(sr):
            print(i)
            ok=1
            break
        i+=1
        sl+=b[i]
        sr-=b[i]
    if not(ok): print("NOT FOUND")
