
from math import *

def gcd(a, b):
    if a<b: a, b=b, a;
    while b!=0:
        tmp=a
        a=b
        b=tmp%a
    return a

def sumDigits(n):
    sum=0
    while n!=0:
        sum+=n%10
        n//=10
    return sum

def checkPrime(n):
    if n<2: return False
    for i in range(2, int(sqrt(n))+1):
        if n%i==0: return False
    return True


if __name__=='__main__':
    t = int(input())
    while t != 0:
        a, b = map(int, input().split())
        if checkPrime(sumDigits(gcd(a, b))):
            print("YES")
        else:
            print("NO")
        t -= 1
