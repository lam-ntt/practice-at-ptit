
dct=dict()

class Employee:
    def __init__(self):
        self.code=input()
        self.name=input()
        self.base=int(input())
        self.days=int(input())

    def cal(self):
        self.group=self.code[0:1]
        self.years=int(self.code[1:3])

        self.salary=self.base*self.days*1000
        if self.group=="A":
            if self.years>=16: self.salary*=20
            elif self.years>=9: self.salary*=14
            elif self.years>=4: self.salary*=12
            else: self.salary*=10
        elif self.group=="B":
            if self.years>=16: self.salary*=16
            elif self.years>=9: self.salary*=13
            elif self.years>=4: self.salary*=11
            else: self.salary*=10
        elif self.group=="C":
            if self.years>=16: self.salary*=14
            elif self.years>=9: self.salary*=12
            elif self.years>=4: self.salary*=10
            else: self.salary*=9
        else:
            if self.years>=16: self.salary*=13
            elif self.years>=9: self.salary*=11
            elif self.years>=4: self.salary*=9
            else: self.salary*=8

    def __repr__(self):
        return f"{self.code} {self.name} {dct[self.code[3:5]]} {self.salary}"



if __name__=="__main__":
    t=int(input())
    while t!=0:
        tmp=input()
        pos=tmp.find(" ")
        dct[tmp[:pos]]=tmp[pos+1:]
        t-=1

    t=int(input())
    a=[]
    while t!=0:
        e=Employee()
        e.cal()
        a.append(e)
        t-=1

    for i in a:
        print(i)

