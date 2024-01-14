
from math import*

class Point:
    def __init__(self, a, b):
        self.a=a
        self.b=b

    def distance(self, other):
        return sqrt(pow(self.a-other.a, 2)+pow(self.b-other.b, 2))


    def build(self, o1, o2):
        d1=self.distance(o1)
        d2=self.distance(o2)
        d3=o1.distance(o2)

        if not(d1+d2>d3 and d2+d3>d1 and d3+d1>d2): return "INVALID"
        else:
            p=(d1+d2+d3)/2
            s=sqrt(p*(p-d1)*(p-d2)*(p-d3))
            return format("%.2f" %s)


t=int(input())
while t!=0:
    a, b, c, d, e, f=map(float, input().split())
    p1=Point(a, b)
    p2=Point(c, d)
    p3=Point(e, f)
    print(p1.build(p2, p3))
    t-=1
