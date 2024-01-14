
from math import*

class Point:
    def __init__(self, a, b):
        self.a=a
        self.b=b

    def distance(self, other):
        return sqrt(pow(self.a-other.a, 2)+pow(self.b-other.b, 2))

class Triangle:
    def __init__(self, a, b, c):
        self.a=a
        self.b=b
        self.c=c

    def build(self):
        d1=self.a.distance(self.b)
        d2=self.a.distance(self.c)
        d3=self.b.distance(self.c)

        if not(d1+d2>d3 and d2+d3>d1 and d3+d1>d2):
            return "INVALID"
        else: return format("%.3f" %(d1+d2+d3))


t=int(input())
lst=[]
while t!=0:
    lst.append(list(map(float, input().split())))
    t-=1

for i in lst:
    tr=Triangle(Point(i[0], i[1]), Point(i[2], i[3]), Point(i[4], i[5]))
    print(tr.build())
