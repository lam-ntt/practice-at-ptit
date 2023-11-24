# Nguyễn Thị Thanh Lam
# B21DCCN474
# N06
# D21CQCN06_B
# BN08

from math import*
import numpy as np
import matplotlib.pyplot as plt

def cal(p, q, r):
    tmp=0
    if p!=0: tmp+=p*log(p, 2)
    if q!=0: tmp+=q*log(q, 2)
    if r!=0: tmp+=r*log(r, 2)
    return -tmp

def func2(lst):
    # Tinh entropy cua cac bo gia tri
    print("Cac bo gia tri thu duoc la: ")
    for p in lst:
        print("p=", p[0], ", q=", p[1], ", r=", p[2], ", H=", "%0.2f" %cal(p[0], p[1], 1-p[0]-p[1]), sep="")
    
    # Ve do thi H(p, q)
    p=[]
    q=[]
    H=[]
    i=0
    while i<=1:
        j=0
        while i+j<=1:
            p.append(i)
            q.append(j)
            H.append(cal(i, j, 1-i-j))
            j+=0.02
        i+=0.02
    ax=plt.axes(projection="3d")
    ax.plot(p, q, H)
    ax.set_title("H(p, q)")
    ax.set_xlabel("p")
    ax.set_ylabel("q")
    ax.set_zlabel("H")
    plt.show()

def func3(p_0): 
    # Tinh entropy cua cac bo gia tri chua p0
    r=p_0
    p=[]
    i=0
    while i<=1-p_0:
        p.append(i);
        i+=0.1
    q=list(map(lambda i: 1-r-i, p))
    H=list(map(lambda i, j: cal(i, j, r), p, q))
    
    print("Cac bo gia tri thu duoc la: ")
    for i in range(len(p)):
        print("p=", "%0.1f" %p[i], ", q=", "%0.1f" %q[i], ", r=", r, ", H=", "%0.2f" %H[i], sep="")
    
    # Ve do thi H_max(p0)
    i=0
    r=[]
    while i<=1:
        r.append(i)
        i+=0.1
    H_max=list(map(lambda i: cal((1-i)/2, (1-i)/2, i), r))
    plt.plot(r, H_max)
    plt.show()

if __name__=="__main__":
    print("Hay chon 1 trong so cac lua chon sau: ")
    print("#0 Thoat")
    print("#1 Tinh entropy cua 1 bo gia tri")
    print("#2 Tinh entropy cua 1 tap gia tri")
    print("#3 Ve tap gia tri H_max")

    choice=-1
    while choice!=0:
        print("Nhap vao lua chon: ")
        choice=int(input())
        if choice==0: break;
        # Cho bo gia tri p, q, r tinh entropy cua nguon
        elif choice==1:
            print("Nhap vao bo gia tri: ")
            p, q, r=map(float, input().split())
            print("Entropy cua nguon la:", "%0.2f" %cal(p, q, r))
        # Cho nhieu bo gia tri p, q, r tinh entropy cua nguon  va ve do thi H(p, q)
        elif choice==2:
            print("Nhap vao so bo gia tri: ")
            n=int(input())
            lst=[]
            for i in range(n):
                tmp=list(map(float, input().split()))
                lst.append(tmp)
            func2(lst)
        # Cho gia tri p0 co dinh tinh entropy cua nguon va ve do thi Hmax(p0)
        elif choice==3:
            print("Nhap vao gia tri co dinh: ")
            p_0=float(input())
            func3(p_0)
