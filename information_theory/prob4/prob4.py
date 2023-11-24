# Nguyễn Thị Thanh Lam
# B21DCCN474
# N06
# D21CQCN06_B
# BN04

code=[]
H=[]
H_T=[]

from math import*
def prev_perm(c):
    i=len(c)-1;
    while c[i]==0 and i>=0:
        c[i]=1
        i-=1
    if i!=-1: c[i]=0;
    return

def gen_code():
    c=[1]*len(H[0])
    com=[0]*len(H)
    std=[0]*len(H)
    for i in range(2**len(c)-1):
        for j in range(len(H_T)):
            com=list(map(lambda a, b: a^c[j]*b, com, H_T[j]))
        if com==std:code.append(c.copy())
        prev_perm(c)
        com = std.copy()

def list_code():
    for x in code:
        print(x)

def check_vector():
    print("Nhap vao vector ma: ")
    c=list(map(int, input().split()))
    return c in code

def find_dmin1():
    d_min=100
    for i in range(len(code)):
        for j in range(i+1, len(code)):
            tmp=list(map(lambda a, b: a^b, code[i], code[j]))
            d_min=min(d_min, sum(tmp))
    return d_min

def find_dmin2():
    c=[1]*len(H[0])
    com=[0]*len(H)
    std=[0]*len(H)
    d_min=100
    for i in range(2**len(c)-1):
        for j in range(len(H_T)):
            com=list(map(lambda a, b: a^c[j]*b, com, H_T[j]))
        if com==std: d_min=min(d_min, sum(c))
        prev_perm(c)
        com = std.copy()
    return d_min

def find_dmin3():
    std=[0]*len(H)
    d_min=100
    for x in code:
        if x!=std: d_min=min(d_min, sum(x))
    return d_min

if __name__=='__main__':
    print("Nhap so hang cua ma tran kiem tra: ")
    row_H=int(input())
    print("Nhap vao ma tran kiem tra: ")
    for i in range(1, row_H+1):
        a=list(map(int, input().split()))
        H.append(a)

    H_T=[[0 for _ in range(len(H))] for _ in range(len(H[0]))]
    for i in range(len(H)):
        for j in range(len(H[0])):
            H_T[j][i]=H[i][j]
    gen_code()

    print("Hay chon 1 trong so cac lua chon sau: ")
    print("#0 Thoat")
    print("#1 Liet ke cac tu ma cua bo ma")
    print("#2 Kiem tra 1 vector co la ma hop le")
    print("#3 Tim dmin theo dinh nghia")
    print("#4 Tim dmin theo so cot cua ma tran kiem tra")
    print("#5 Tim dmin theo tinh chat cua ma khoi tuyen tinh")
    
    while 1:
        print("Nhap vao lua chon: ")
        choice=int(input())
        if choice==0: break;

        # In ra danh sach tu ma cua bo ma
        elif(choice==1): 
            print("Danh sach tu ma cua bo ma la:")
            list_code()
        # Kiem tra 1 vector co la tu ma hop le
        elif choice==2: 
            if check_vector(): print("Vector la tu ma hop le ")
            else: print("Vector khong la tu ma hop le")
        # Tim dmin dua tren dinh nghia
        elif choice==3: print("Khoang cach Hamming toi thieu cua bo ma la:", find_dmin1())
        # Tim dmin dua tren so cot cua ma tran kiem tra
        elif choice==4: print("Khoang cach Hamming toi thieu cua bo ma la:", find_dmin2())
        # Tim dmin dua tren tinhs chat cua ma khoi tuyen tinh
        elif choice==5: print("Khoang cach Hamming toi thieu cua bo ma la:", find_dmin3())
