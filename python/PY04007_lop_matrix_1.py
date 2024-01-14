
class Matrix:
    def __init__(self, m, n):
        self.n=n
        self.m=m
        self.a=[[0 for _ in range(m)] for __ in range(n)]

    def inp(self):
        for i in range(n):
            self.a[i]=list(map(int, input().split()))

    def selfMulti(self):
        other=Matrix(self.n, self.n)
        for i in range(self.n):
            for j in range(self.n):
                for k in range(self.m):
                    other.a[i][j]+=self.a[i][k]*self.a[j][k]
        return other

    def out(self):
        for i in range(self.n):
            for j in range(self.m):
                print(self.a[i][j], end=" ")
            print()

if __name__=="__main__":
    t=int(input())
    while t!=0:
        n, m=map(int, input().split())
        mt=Matrix(n, m)
        mt.inp()
        mt=mt.selfMulti()
        mt.out()
        t-=1
