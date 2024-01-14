
def convert(s):
    alphas, digits=[], []
    for i in s:
        if i.isalpha(): alphas.append(i)
        else: digits.append(int(i))
    alphas=sorted(alphas)

    res=""
    for i in alphas:
        res+=i
    res+=str(sum(digits))
    return res


if __name__=="__main__":
    t=int(input())
    while t!=0:
        s=input()
        print(convert(s))
        t-=1
