
def findGcd(a, b):
    if a<b: a, b=b, a
    while b!=0:
        tmp=a
        a=b
        b=tmp%b
    return int(a)

class Point:
    def __init__(self, a, b):
        self.a=a
        self.b=b

    def normalize(self):
        gcd=findGcd(self.a, self.b)
        self.a//=gcd
        self.b//=gcd
        return self

    def __str__(self):
        return f"{self.a}/{self.b}"

if __name__=="__main__":
    a, b=map(int, input().split())
    p=Point(a, b)
    print(p.normalize())