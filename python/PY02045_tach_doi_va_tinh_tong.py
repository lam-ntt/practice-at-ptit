
def cal(s):
    if len(s)==1:
        print(s)
        return

    l=s[:len(s)//2]
    r=s[len(s)//2:]
    s=str(int(l)+int(r))
    print(s)
    if len(s)!=1: cal(s)

if __name__=="__main__":
    s=input()
    cal(s)