import re

t=int(input())
while(t!=0):
    a=re.split("[^0-9]", input())
    mn=1e20
    for i in a:
        try:
            mn=min(mn, int(i))
        except:
            continue
    print(mn)
    t-=1
