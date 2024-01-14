
class Number:
    def __init__(self, a, b):
        self.a=a
        self.b=b

    def sum(n1, n2):
        return Number(n1.a+n2.a, n1.b+n2.b)

    def multi(n1, n2):
        return Number(n1.a*n2.a-n1.b*n2.b, n1.a*n2.b+n1.b*n2.a)

    def __str__(self):
        tmp=f"{self.a} "
        if self.b>0: tmp+=f"+ {self.b}i"
        else: tmp+=f"- {abs(self.b)}i"

        return tmp

if __name__=="__main__":
    t=int(input())
    while t!=0:
        a, b, c, d=map(int, input().split())
        n1=Number(a, b)
        n2=Number(c, d)

        tmp=Number.sum(n1, n2)
        c=Number.multi(tmp, n1)
        d=Number.multi(tmp, tmp)
        print(c, d, sep=", ")
        t-=1
