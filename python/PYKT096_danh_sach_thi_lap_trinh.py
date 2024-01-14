
dct=dict()
cnt=0

class Student:
    def __init__(self):
        global cnt
        cnt+=1
        self.code="C%03d" %cnt
        self.name=input()
        self.team=dct[input()]

    def __repr__(self):
        return f"{self.code} {self.name} {self.team}"


if __name__=="__main__":
    t=int(input())
    count=0
    while t!=0:
        count+=1
        dct[f"Team%02d" %count]=input()+" "+input()
        t-=1

    t=int(input())
    a=[]
    while t!=0:
        a.append(Student())
        t-=1

    a=sorted(a, key=lambda i: i.name)

    for i in a:
        print(i)
