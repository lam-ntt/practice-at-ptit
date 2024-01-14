
def check(n):
    sum, multi=0, 1
    ok=0
    for i in range(len(n)):
        if i%2==0: sum+=ord(n[i])-ord('0')
        else:
            if n[i]!='0':
                ok=1
                multi*=ord(n[i])-ord('0')
    if ok==0: multi=0
    print(sum, multi)

if __name__=="__main__":
    t=int(input())
    while t!=0:
        n=input()
        check(n)
        t-=1
