
def convert(s, n, m):
    res=""
    for i in range(len(s)):
        if s[i: i+1]==n:
            res+=m
        else:
            res+=s[i: i+1]
    return res

def summ(a, b):
    while len(a)<len(b): a="0"+a
    while len(b)<len(a): b="0"+b

    a=a[::-1]
    b=b[::-1]

    res=""
    temp=0
    for i in range(len(a)):
        tmp=ord(a[i: i+1])+ord(b[i: i+1])-ord('0')*2+temp
        if tmp>=10:
            temp=tmp//10
            tmp=tmp%10
        res+=chr(ord('0')+tmp)

    if temp!=0:
        res+=chr(ord('0')+temp)
    return res[::-1]


if __name__=="__main__":
    t=int(input())
    a=[]
    while t!=0:
        n, m=map(str, input().split())
        s=input().strip()
        tt=input().strip()

        a.append(n)
        a.append(m)
        a.append(s)
        a.append(tt)
        t-=1

    for i in range(0, len(a), 4):
        n, m, s, tt=a[i], a[i+1], a[i+2], a[i+3]
        if int(n)>int(m):
            n, m=m, n
        print(summ(convert(s, m, n), convert(tt, m, n)),
              summ(convert(s, n, m), convert(tt, n, m)))
