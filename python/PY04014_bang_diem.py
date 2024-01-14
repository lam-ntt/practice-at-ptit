
cnt=0
class Student:
    def __init__(self):
        global cnt
        cnt+=1
        self.code=format("HS%02d" %cnt)
        self.name=input()
        lst=list(map(float, input().split()))
        self.score=(sum(lst[:2])*2+sum(lst[2:]))/12

    def cal(self):
        if self.score>=9: self.rank="XUAT SAC"
        elif self.score>=8: self.rank="GIOI"
        elif self.score>=7: self.rank="KHA"
        elif self.score>=5: self.rank="TB"
        else: self.rank="YEU"

    def __str__(self):
        return f"{self.code} {self.name} "+format("%.1f" %self.score)+(f""
                                                                       f" {self.rank}")

if __name__=="__main__":
    t=int(input())
    a=[]
    while t!=0:
        s=Student()
        s.cal()
        a.append(s)
        t-=1

    a=sorted(a, key=lambda i: (-i.score, i.code))
    for i in a:
        print(i)

