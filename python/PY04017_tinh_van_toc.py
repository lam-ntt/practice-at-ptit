
from datetime import time

class Candidate:
    def __init__(self):
        self.name=input()
        self.addr=input()
        self.res=input()

    def cal(self):
        tmp=list(map(str, (self.addr+" "+self.name).split()))
        self.code=""
        for i in tmp:
            self.code+=i[0:1]

        hours=int(self.res[0:1])+int(self.res[2:4])/60-6
        self.verlocity=120/hours

    def __repr__(self):
        return f"{self.code} {self.name} {self.addr} {round(self.verlocity)} Km/h"

if __name__=="__main__":
    t=int(input())
    a=[]
    while t!=0:
        c=Candidate()
        c.cal()
        a.append(c)
        t-=1

    a=sorted(a, key=lambda i: -i.verlocity)
    for i in a:
        print(i)



