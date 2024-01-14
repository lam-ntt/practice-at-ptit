
from math import *

def check(n):
    sum=0
    cur=-1
    while n!=0:
        if cur!=-1 and abs(n%10-cur)!=2: return False
        cur=n%10
        sum+=n%10
        n//=10
    return sum%10==0

if __name__=="__main__":
    t=int(input())
    while t!=0:
        n=int(input())
        if check(n): print("YES")
        else: print("NO")
        t-=1
