# Nguyễn Thị Thanh Lam
# B21DCCN474
# N06
# D21CQCN06_B
# BN07

from math import*

code=[]
checksum=[]
d_min=100
H=[]
H_T=[]

def change_g_to_h(l, g):
    h=[]
    l=[0, l]
    # Chia 
    while 1:
        q=max(l)-max(g)
        h.append(q)
        l=list(set(l)^set(map(lambda x: x+q, g)))
        if not l: break
    h.sort()
    return h

def convert():
    if code["isGPoly"]==1: 
        code["isGPoly"]=0
        code["poly"]=change_g_to_h(code["nL"], code["poly"])
    h=[0]*(max(code["poly"])+1)
    for i in code["poly"]:
        h[i]=1

    global H
    for i in range(code["nL"]-len(h)+1):
        tmp=[0]*i+h[::-1]+[0]*(code["nL"]-len(h)-i)
        H.append(tmp)
    global H_T
    H_T=[[0 for _ in range(len(H))] for _ in range(len(H[0]))]
    for i in range(len(H)):
        for j in range(len(H[0])):
            H_T[j][i]=H[i][j]

def list_sum(sum):
    for i in range(len(sum)-1):
        print("r", sum[i], "+", sep="", end="")
    print("r", sum[len(sum)-1], sep="")

def cal_checksum():
    global checksum
    for i in range(len(H)):
        tmp=[]
        for j in range(len(H[i])):
            if H[i][j]==1: tmp.append(j)
        checksum.append(tmp)

def prev_perm(c):
    i=len(c)-1
    while i>=0 and c[i]==0:
        c[i]=1
        i-=1
    if i!=-1: c[i]=0
    return

def find_dmin():
    c=[1]*len(H[0])
    com=[0]*len(H)
    std=[0]*len(H)
    global d_min
    for i in range(2**len(c)-1):
        for j in range(len(H_T)):
            com=list(map(lambda x, y: x^c[j]*y, com, H_T[j]))
        if com==std: d_min=min(d_min, sum(c))
        prev_perm(c)
        com = std.copy()
    return d_min

def next_comb(c, l, k):
    i=len(c)-1
    while i>=0 and c[i]==l-k+i+1: i-=1
    c[i]+=1
    for j in range(i+1, k):
        c[j]=c[j-1]+1

def check_full_orthogonal_ability():
    n=len(checksum)
    k=find_dmin()-1
    c=[x for x in range(1, k+1)]
    for i in range(comb(n, k)):
        its=set(range(1, code["nL"]+1))
        uni=set(range(0))
        for j in range(k):
            its=its&set(checksum[c[j]])
            uni=uni|set(checksum[c[j]])
        if len(checksum[0])*k==len(uni)+len(its)*(k-1): return True
        next_comb(c, l, k)
    return False

def check_orthogonal_ability():
    for i in range(len(checksum)):
        for j in range(len(checksum)):
            if i==j: continue
            tmp=set(checksum[i])&set(checksum[j])
            if(not(not tmp)): return True
    return False

if __name__=="__main__":
    code={
            'codename':'null',
            'nL':0,
            'poly':[],
            'isGPoly':0
        }
    # Nhap thong tin bo ma
    print("Nhap cac thong tin cua bo ma:")
    print("Nhap ten bo ma: ")
    tmp=input()
    code["codename"]=tmp;
    print("Nhap do dai tu ma: ")
    tmp=int(input())
    code["nL"]=tmp
    print("Nhap da thuc sinh/kiem tra duoi dang he so mu cua da thuc (nguoc): ")
    tmp=list(map(int, input().split()))
    code["poly"]=tmp;
    print("Nhap 1 neu la da thuc sinh, 0 neu la da thuc kiem tra: ")
    tmp=int(input())
    code["isGPoly"]=tmp
    
    # Chuyển đổi g, h (nếu cần), tính H, H_T
    convert()
    # Tính các tổng kiểm tra
    cal_checksum()
    # Tìm khoảng cách tối thiểu
    find_dmin()

    # Yêu cầu
    print("Hay chon 1 trong so cac lua chon sau: ")
    print("#0 Thoat")
    print("#1 Liet ke tat ca cac tong kiem tra")
    print("#2 Kiem tra bo ma co kha nang truc giao day du khong")
    print("#3 Kiem tra bo ma co kha nang truc giao khong")

    while 1:
        print("Hay nhap vao lua chon: ")
        choice=int(input())
        if choice==0: break
        elif choice==1:
            print("Cac tong kiem tra cua bo ma la: ")
            for i in range(len(checksum)):
                print("A", i, "=", sep="", end="")
                list_sum(checksum[i])
        elif choice==2:
            if check_full_orthogonal_ability(): print("Bo ma co kha nang truc giao day du")
            else:print("Bo ma khong co kha nang truc giao day du")
        elif choice==3:
            if check_orthogonal_ability(): print("Bo ma co kha nang truc giao")
            else:print("Bo ma khong co kha nang truc giao")