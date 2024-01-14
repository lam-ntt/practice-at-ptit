
cnt=0
class Candidate():
    def __init__(self):
        global cnt
        cnt+=1
        self.code=format("TS0%d" %cnt)
        self.name=input()
        s1, s2=float(input()), float(input())
        s1, s2=float(input()), float(input())
        if s1>10 or s2>10: self.score=(s1+s2)/20
        else: self.score=(s1+s2)/2

    def cal(self):
        if self.score>=9.5: self.rank="XUAT SAC"
        elif self.score>=8: self.rank="DAT"
        elif self.score>=5: self.rank="CAN NHAC"
        else: self.rank="TRUOT"

    def __str__(self):
        return f"{self.code} {self.name} "+format("%.2f" %self.score)+(f""
                                                                       f" {self.rank}")


if __name__=="__main__":
    t=int(input())
    a=[]
    while t!=0:
        c=Candidate()
        c.cal()
        a.append(c)
        t-=1

    a=sorted(a, key=lambda i: -i.score)
    for i in a:
        print(i)
