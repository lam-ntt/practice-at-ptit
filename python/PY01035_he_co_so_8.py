
dict={
    "000": '0',
    "001": '1',
    "010": '2',
    "011": '3',
    "100": '4',
    "101": '5',
    "110": '6',
    "111": '7'
}

def convert(n):
    if len(n)==0: return ""
    return dict[n[:3]]+convert(n[3:])


if __name__=="__main__":
    n=input()
    while len(n)%3!=0:
        n="0"+n
    print(convert(n))