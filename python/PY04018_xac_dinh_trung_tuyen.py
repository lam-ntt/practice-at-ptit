
cnt=0

class Candidate:
    def __init__(self):
        global cnt
        cnt+=1
        self.code=f"GV%02d" %cnt
        self.name=input()
        self.code2=input()
        self.score=float(input())*2+float(input())

    def cal(self):
        if self.code2[0:1]=='A': self.subj="TOAN"
        elif self.code2[0:1]=='B': self.subj="LY"
        else: self.subj="HOA"

        if self.code2[1:2]=='1': self.score+=2.0
        elif self.code2[1:2]=='2': self.score+=1.5
        elif self.code2[1:2]=='3': self.score+=1.0

        if self.score>=18: self.state="TRUNG TUYEN"
        else: self.state="LOAI"


    def __repr__(self):
        return (f"{self.code} {self.name} {self.subj}"
                f" {round(self.score, 1)} {self.state}")

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

