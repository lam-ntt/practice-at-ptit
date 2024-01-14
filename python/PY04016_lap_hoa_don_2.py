
from datetime import date

cnt=0

class Client:
    def __init__(self):
        global cnt
        cnt+=1
        self.code=f"KH%02d" %cnt
        self.name=input().strip()
        self.room=input().strip()
        self.checkin=input()
        self.checkout=input()
        self.fee=int(input())

    def cal(self):
        date1=date(int(self.checkin[6:10]), int(self.checkin[3:5]), int(self.checkin[0:2]))
        date2=date(int(self.checkout[6:10]), int(self.checkout[3:5]),
                   int(self.checkout[0:2]))
        self.days=(date2-date1).days+1

        if self.room[0]=='1': self.price=self.days*25
        elif self.room[0]=='2': self.price=self.days*34
        elif self.room[0]=='3': self.price=self.days*50
        else: self.price=self.days*80
        self.price+=self.fee

    def __repr__(self):
        return f"{self.code} {self.name} {self.room} {self.days} {self.price}"

if __name__=="__main__":
    t=int(input())
    a=[]
    while t!=0:
        c=Client()
        c.cal()
        a.append(c)
        t-=1

    a=sorted(a, key=lambda i: -i.price)
    for i in a:
        print(i)
