
class Student:
    def __init__(self):
        self.code=input()
        self.name=input()
        self.group=input()
        self.score=0

    @staticmethod
    def setScore(l, code, score):
        for i in l:
            if i.code==code:
                i.score=score

    def __repr__(self):
        tmp=f"{self.code} {self.name} {self.group} {self.score}"
        if self.score==0: tmp+=" KDDK"
        return tmp

if __name__=="__main__":
    t=int(input())
    tt=t
    a=[]
    while t!=0:
        a.append(Student())
        t-=1

    while tt!=0:
        code, data=map(str, input().split())
        score=10
        for i in data:
            if i=='v': score-=2
            elif i=='m': score-=1
        if score<0: score=0
        Student.setScore(a, code, score)
        tt-=1

    for i in a:
        print(i)
