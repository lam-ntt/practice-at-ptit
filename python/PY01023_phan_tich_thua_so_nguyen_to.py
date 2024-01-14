
from math import *

t=int(input())
while t!=0:
    n=int(input())
    print("1 ", end="")
    nn=n
    cnt=0
    for i in range(2, int(sqrt(n))+1):
        if nn%i==0:
            while nn%i==0:
                cnt+=1
                nn//=i
            print("* ", i, "^", cnt, " ", sep="", end="")
            cnt=0
            if nn==1: break
    if nn!=1:
        print("* ", nn, "^1", sep="", end="")
    print()
    t-=1
