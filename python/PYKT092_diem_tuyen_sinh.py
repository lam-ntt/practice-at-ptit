
cnt=0

class Candidate:
    def __init__(self):
        global cnt
        cnt+=1
        self.code=f"TS%02d" %cnt
        tmp=list(map(str, input().strip().lower().split()))
        self.name=""
        for i in tmp:
            self.name+=i[0:1].upper()+i[1:]+" "
        self.name=self.name[:len(self.name)-1]
        self.score=float(input())
        self.ethnic=input()
        self.region=int(input())

    def cal(self):
        if self.region==1: self.score+=1.5
        elif self.region==2: self.score+=1

        if self.ethnic!="Kinh": self.score+=1.5

        if self.score>=20.5: self.state="Do"
        else: self.state="Truot"

    def __repr__(self):
        return f"{self.code} {self.name} {self.score} {self.state}"

if __name__=="__main__":
    t=int(input())
    a=[]
    while t!=0:
        c=Candidate()
        c.cal()
        a.append(c)
        t-=1

    a=sorted(a, key=lambda i: (-i.score, i.code))

    for i in a:
        print(i)
