a=[]

def find(l, r, value):
    if l>r: return -1
    m=(l+r)//2
    if a[m]==value: return tmp
    elif a[m]>value: return find(l, m-1, value)
    else: return find(m+1, r, value)


if __name__=="__main__":
    t=int(input())
    while t!=0:
        n=int(input())
        a=list(map(int, input().split()))

        a=sorted(a)
        cnt=0
        for i in range(0, len(a)-2):
            for j in range(i+1, len(a)-1):
                tmp=-(a[i]+a[j])
                if tmp<=a[i]+a[j]: continue

                pos=find(j+1, len(a)-1, tmp)
                if pos!=-1:
                    cnt+=1
        print(cnt)
        t-=1



