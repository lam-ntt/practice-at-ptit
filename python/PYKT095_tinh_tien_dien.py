
cnt=0

class Client:
    def __init__(self):
        global cnt
        cnt+=1
        self.code=f"KH%02d" %cnt
        tmp=list(map(str, input().strip().lower().split()))
        self.name=""
        for i in tmp:
            self.name+=i[0:1].upper()+i[1:]+" "
        self.name=self.name[:len(self.name)-1]
        self.type, fi, se=map(str, input().split())
        self.num=int(se)-int(fi)

    def cal(self):
        if self.type=="A":
            self.price=min(self.num, 100)*450
        elif self.type=="B":
            self.price=min(self.num, 500)*450
        else:
            self.price=min(self.num, 200)*450

        if self.type=="A" and self.num>100:
            self.bonus=(self.num-100)*1000
        elif self.type=="B" and self.num>500:
            self.bonus=(self.num-500)*1000
        elif self.type=="C" and self.num>200:
            self.bonus=(self.num-200)*1000
        else:
            self.bonus=0

        self.fee=self.bonus//20
        self.sum=self.price+self.bonus+self.fee

    def __repr__(self):
        return f"{self.code} {self.name} {self.price} {self.bonus} {self.fee} {self.sum}"

if __name__=="__main__":
    t=int(input())
    a=[]
    while t!=0:
        c=Client()
        c.cal()
        a.append(c)
        t-=1

    a=sorted(a, key=lambda i: -i.sum)

    for i in a:
        print(i)
