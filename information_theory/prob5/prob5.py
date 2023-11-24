# Nguyễn Thị Thanh Lam
# B21DCCN474
# N06
# D21CQCN06_B
# BN05

from math import*
import numpy as np
import matplotlib.pyplot as plt

def find_l(k, d_min):
    l=0
    for i in range(0, k, 1):
        l+=ceil(d_min/(2**i))
    return l

def find_dmin(l, k):
    d_min=l*2**(k-1)/(2**k-1)
    return floor(d_min)

def find_k(l, t):
    sum=0
    for i in range(t+1):
        sum+=comb(l, i)
    k=ceil(l-log(sum, 2))
    return k

if __name__=="__main__":
    print("Hay chon 1 trong so cac lua chon sau: ")
    print("#0 Thoat")
    # Phần tính toán
    print("#1 Tim gioi han Griesmer")
    print("#2 Tim gioi han Plotkin")
    print("#3 Tim gioi han Hamming")
    # Phần vẽ đồ thị 
    print("#4 Ve do thi gioi han Griesmer")
    print("#5 Ve do thi gioi han Plotkin")
    print("#6 Ve do thi gioi han Hamming")

    while 1:
        print("Nhap vao lua chon: ")
        choice=int(input())
        if choice==0: break
        # Cho k, d_min tìm min{l}
        elif choice==1:
            print("Nhap vao do dai ban tin va khoang cach toi thieu: ")
            k, d_min=map(int, input().split())
            print("Do dai tu ma thoa man gioi han Griesmer la:", find_l(k, d_min))
        # Cho l, k tìm max{d_min}
        elif choice==2: 
            print("Nhap vao do dai tu ma va do dai ban tin: ")
            l, k=map(int, input().split())
            print("Khoang cach toi thieu thoa man gioi han Plotkin la:", find_dmin(l, k))
        # Cho l, t tìm max{k}
        elif choice==3: 
            print("Nhap vao do dai tu ma va kha nang sua sai: ")
            l, t=map(int, input().split())
            print("Do dai ban tin thoa man gioi han Hamming la:", find_k(l, t))
        elif choice==4:
            # Giới hạn Griesmer
            x=[]
            y=[]
            z=[]
            for i in range(1, 100, 2):
                for j in range(1, 100, 2):
                    if i<find_l(i, j): 
                        x.append(i)
                        y.append(j)
                        z.append(find_l(i, j)) 
                        
            ax = plt.axes(projection='3d')
            ax.plot(x, y, z)
            ax.set_title("Gioi han Griesmer")
            ax.set_xlabel("k")
            ax.set_ylabel("d_min")
            ax.set_zlabel("l")
            plt.show()
        elif choice==5:
            # Giới hạn Plotkin
            x=[]
            y=[]
            z=[]
            for i in range(1, 100, 2):
                for j in range(1, 100, 2):
                    if i>j: 
                        x.append(i)
                        y.append(j)
                        z.append(find_dmin(i, j)) 
                        
            ax = plt.axes(projection='3d')
            ax.plot(x, y, z)
            ax.set_title("Gioi han Plotkin")
            ax.set_xlabel("l")
            ax.set_ylabel("k")
            ax.set_zlabel("d_min")
            plt.show()
        elif choice==6:
            # Giới hạn Hamming
            x=[]
            y=[]
            z=[]
            for i in range(1, 100, 2):
                for j in range(1, 100, 2):
                    if i>find_k(i, j): 
                        x.append(i)
                        y.append(j)
                        z.append(find_k(i, j)) 
                        
            ax = plt.axes(projection='3d')
            ax.plot(x, y, z)
            ax.set_title("Gioi han Hamming")
            ax.set_xlabel("l")
            ax.set_ylabel("t")
            ax.set_zlabel("k")
            plt.show()