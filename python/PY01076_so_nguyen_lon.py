
def gcd(a, b):
    if a<b: a, b=b, a
    while b!=0:
        tmp=a
        a=b
        b=tmp%b
    return a

if __name__=="__main__":
    t=int(input())
    while t!=0:
        a, b=int(input()), int(input())
        print(gcd(a, b))
        t-=1


