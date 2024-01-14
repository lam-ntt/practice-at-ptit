
from math import*
from decimal import Decimal

class Point:
    def __init__(self, a, b):
        self.a=a
        self.b=b

    def distance(self, other):
        return format("%.4f" %(sqrt(pow(self.a-other.a, 2)+pow(self.b-other.b, 2))))

t = int(input())
while t > 0:
    arr = input().split()
    p1 = Point(Decimal(arr[0]), Decimal(arr[1]))
    p2 = Point(Decimal(arr[2]), Decimal(arr[3]))
    print(p1.distance(p2))
    t -= 1
