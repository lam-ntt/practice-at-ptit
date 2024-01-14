
cnt=0
class Bill:
    def __init__(self):
        global cnt
        cnt+=1
        self.code=format("KH%02d" %cnt)
        self.name=input()
        self.num=-int(input())+int(input())

    def cal(self):
        if self.num>100:
            self.price=(self.num-100)*200+50*150+50*100
            self.price*=1.05
        elif self.num>50:
            self.price=(self.num-50)*150+50*100
            self.price*=1.03
        else:
            self.price=self.num*100*1.02

    def __str__(self):
        return f"{self.code} {self.name} {int(self.price)}"

if __name__=="__main__":
    t=int(input())
    a=[]
    while t!=0:
        b=Bill()
        b.cal()
        a.append(b)
        t-=1

    a=sorted(a, key=lambda i: -i.price)
    for i in a:
        print(i)
