
def convert(n):
    if n>=39: return 9.0
    elif n>=37: return 8.5
    elif n>=35: return 8.0
    elif n>=33: return 7.5
    elif n>=30: return 7.0
    elif n>=27: return 6.5
    elif n>=23: return 6.0
    elif n>=20: return 5.5
    elif n>=16: return 5.0
    elif n>=13: return 4.5
    elif n>=10: return 4.0
    elif n>=7: return 3.5
    elif n>=5: return 3.0
    elif n>=3: return 2.5
    else: return 0.0

if __name__=="__main__":
    t=int(input())
    while t!=0:
        a, b, c, d=map(float, input().split())
        a, b=convert(int(a)), convert(int(b))
        avg=(a+b+c+d)/4
        base=int(avg)
        bonus=avg-base
        if bonus>=0.75: bonus=1.0
        elif bonus>=0.25: bonus=0.5
        else: bonus=0
        avg=base+bonus
        print("%0.1f" %avg)
        t-=1
