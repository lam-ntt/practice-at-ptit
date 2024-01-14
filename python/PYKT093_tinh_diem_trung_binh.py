
cnt=0

class Candidate:
    def __init__(self):
        global cnt
        cnt+=1
        self.code=f"SV%02d" %cnt
        tmp=list(map(str, input().strip().lower().split()))
        self.name=""
        for i in tmp:
            self.name+=i[0:1].upper()+i[1:]+" "
        self.name=self.name[:len(self.name)-1]
        self.score=(int(input())*3+int(input())*3+int(input())*2)/8

    def setRank(self, rank):
        self.rank=rank

    def __repr__(self):
        return f"{self.code} {self.name} %.2f {self.rank}" %round(
            self.score+0.001, 2)

if __name__=="__main__":
    t=int(input())
    a=[]
    while t!=0:
        a.append(Candidate())
        t-=1

    a=sorted(a, key=lambda i: (-i.score, i.code))

    cnt=2
    a[0].setRank(1)
    for i in range(1, len(a)):
        if a[i].score==a[i-1].score:
            a[i].setRank(a[i-1].rank)
        else:
            a[i].setRank(cnt)
        cnt+=1

    for i in a:
        print(i)

