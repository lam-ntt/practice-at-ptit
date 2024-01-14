

def cal(n, m):
    if m==1:
        if n>=20: return "Bao Binh"
        return "Ma Ket"
    elif m==2:
        if n>=19: return "Song Ngu"
        return "Bao Binh"
    elif m==3:
        if n>=21: return "Bach Duong"
        return "Song Ngu"
    elif m==4:
        if n>=20: return "Kim Nguu"
        return "Bach Duong"
    elif m==5:
        if n>=21: return "Song Tu"
        return "Kim Nguu"
    elif m==6:
        if n>=21: return "Cu Giai"
        return "Song Tu"
    elif m==7:
        if n>=23: return "Su Tu"
        return "Cu Giai"
    elif m==8:
        if n>=23: return "Xu Nu"
        return "Su Tu"
    elif m==9:
        if n>=23: return "Thien Binh"
        return "Xu Nu"
    elif m==10:
        if n>=23: return "Thien Yet"
        return "Thien Binh"
    elif m==11:
        if n>=23: return "Nhan Ma"
        return "Thien Yet"
    else:
        if n>=22: return "Ma Ket"
        return "Nhan Ma"

if __name__=="__main__":
    t=int(input())
    while t!=0:
        n, m=map(int, input().split())
        print(cal(n, m))
        t-=1