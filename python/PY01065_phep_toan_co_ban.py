



def invalid(s):
    if [2]!=' ' or s[4]!=' ' or s[8]!='=': return
    a=int(s[0, 2])
    b=int(s[5, 7])
    c=int(s[len(s)-2:])
    if s[3]=='+' and a+b==c: print(s)
    elif s[3]=='-' and a-b==c: print(s)
    elif s[3]=='*' and a*b==c: print(s)
    elif s[3]=='/' and a//b==c and a%b==0: print(s)
    else: return


digits=['0', '1', '2', '3', '4', '5', '6', '7', '8', '9']
signs=['+', '-', '*', '/']

def check(s, pos):
    if s[pos]=='?':
        if pos in [0, 1, 5, 6, 10, 11]:
            for s[pos] in digits:
                if pos==11: invalid(s)
                else: check(s, pos+1)
        elif pos==3:
            for s[pos] in signs:
                check(s, pos+1)
        elif pos==8:
            s[pos]='='
            check(s, pos+1)
    if pos==len(s)-1: invalid(s)
    else: check(s, pos+1)


if __name__=="__main__":
    t=int(input())
    while t!=0:
        s=input()
        ok=0
        check(s, 0)
        if ok==0: print("WRONG PROBLEM!")
        t-=1
