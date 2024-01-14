
if __name__=="__main__":
    n, m=map(int, input().split())
    a=[]
    for i in range(n):
        a.append(list(map(int, input().split())))

    mx, mn=-1, 1e9
    for i in a:
        for j in i:
            mx=max(mx, j)
            mn=min(mn, j)

    res=mx-mn
    pos=[]
    for i in range(n):
            for j in range(m):
                if a[i][j]==res:
                    pos.append([i, j])

    if len(pos)==0: print("NOT FOUND")
    else:
        print(res)
        for i in pos:
            print(f"Vi tri [{i[0]}][{i[1]}]")


