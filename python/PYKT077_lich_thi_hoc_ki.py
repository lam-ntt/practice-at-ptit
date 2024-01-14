
from datetime import date, time

dct=dict()
cnt=0

class Item:
    def __init__(self):
        global cnt
        cnt+=1
        self.code=f"T%03d" %cnt
        self.code2, self.dt, self.tm, self.group=map(str, input().split())

    def getDate(self):
        return date(int(self.dt[6:10]), int(self.dt[3:5]), int(self.dt[0:2]))

    def getTime(self):
        return time(int(self.tm[0:2]), int(self.tm[3:5]))

    def __repr__(self):
        return (f"{self.code} {self.code2} {dct[self.code2]} {self.dt} "
                f"{self.tm} {self.group}")

if __name__=="__main__":
    t, tt=map(int, input().split())
    cnt=0
    while t!=0:
        tmp, tmp2=input(), input()
        dct[tmp]=tmp2
        t-=1

    a=[]
    while tt!=0:
        a.append(Item())
        tt-=1

    a=sorted(a, key=lambda i: (i.getDate(), i.getTime(), i.code2))
    for i in a:
        print(i)

