

def cal(a, b):
    if a<2: return 0
    else:
        return a*(a-1)//2

if __name__=="__main__":
    t=int(input())
    a=[]
    for i in range (t):
        a.append(input())

    cnt_row=[0 for i in range(0, t)]
    cnt_col=[0 for i in range(0, t)]
    for i in range(0, t):
        for j in range(0, t):
            if a[i][j]=='C':
                cnt_row[i]+=1
                cnt_col[j]+=1

    res=0
    for i in range(0, t):
        res+=cal(cnt_row[i], 2)
        res+=cal(cnt_col[i], 2)
    print(res)

