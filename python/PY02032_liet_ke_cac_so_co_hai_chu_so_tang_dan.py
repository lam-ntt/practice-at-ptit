
s=input()
se=set()
if len(s)%2==1: s=s[0:len(s)-1]
for i in range(0, len(s), 2):
    se.add(int(s[i:i+2]))

a=sorted(se)
for i in a:
    print(i, end=" ")