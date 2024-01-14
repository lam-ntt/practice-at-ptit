import re

t=int(input())
while t!=0:
    n=int(input())
    a=input()

    res=[]

    for i in range(8, 0, -1):
        print(i)
        tmp=re.findall(r"-\d{{{count}}}".format(count=i), a)
        print(i, "  ", tmp)
        # tmp=sorted(tmp)
        # res.append(tmp)
        # if len(res)>=3: break

    for i in range(1, 9):
        tmp=re.findall(r"\d{{{count}}}".format(count=i), a)
        print(i, "  ", tmp)
        # tmp=sorted(tmp)
        # res.append(tmp)
        # if len(res)>=3: break


    # print(res[0], res[1], res[2])


    t-=1


