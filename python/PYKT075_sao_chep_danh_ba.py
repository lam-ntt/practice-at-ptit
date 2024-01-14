
def findName(s):
    s=list(map(str, s.split()))
    return s[len(s)-1], s[1]

if __name__=="__main__":
    with open("SOTAY.txt", "r") as r:
        tmp=r.readlines()
    r.close()

    a=[]
    day=""
    cnt=0
    while cnt!=len(tmp):
        s=tmp[cnt].replace("\n", "")
        cnt+=1
        if s.startswith("Ngay"):
            s=list(map(str, s.split()))
            day=s[1]
        else:
            t=tmp[cnt].replace("\n", "")
            cnt+=1
            a.append([s, t, day])

    a=sorted(a, key=lambda i: findName(i[0]))

    with open("DIENTHOAI.txt", "w") as w:
        for i in a:
            w.write(i[0]+": "+i[1]+" "+i[2]+"\n")
    w.close()
