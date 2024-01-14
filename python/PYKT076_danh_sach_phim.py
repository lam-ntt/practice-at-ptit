
from datetime import date

dct=dict()
cnt=0

class Film:
    def __init__(self):
        global cnt
        cnt+=1
        self.code=f"P%03d" %cnt
        self.kind=input()
        self.date=input()
        self.name=input()
        self.num=int(input())

    def getDate(self):
        return date(int(self.date[6:10]), int(self.date[3:5]), int(self.date[
                                                                  0:2]))

    def __repr__(self):
        return f"{self.code} {dct[self.kind]} {self.date} {self.name} {self.num}"


if __name__=="__main__":
    t, tt=map(int, input().split())
    count=0
    while t!=0:
        count+=1
        dct[f"TL%03d" %count]=input()
        t-=1

    a=[]
    while tt!=0:
        a.append(Film())
        tt-=1

    a=sorted(a, key=lambda i: (i.getDate(), i.name, -i.num))
    for i in a:
        print(i)

