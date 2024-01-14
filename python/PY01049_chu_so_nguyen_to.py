
from math import*

def checkPrime(n):
    if n<2: return False
    for i in range(2, int(sqrt(n)+1)):
        if n%i==0: return False
    return True

def check(n):
    if checkPrime(len(n))==False: return False
    cnt=0
    for i in range(len(n)):
        if n[i] in ['2', '3', '5', '7']: cnt+=1
    return cnt>len(n)-cnt


if __name__=="__main__":
    t=int(input())
    while t!=0:
        n=input()
        if check(n): print("YES")
        else: print("NO")
        t-=1
