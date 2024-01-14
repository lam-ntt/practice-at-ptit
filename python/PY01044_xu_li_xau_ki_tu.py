

a=list(map(str, input().lower().split()))
b=list(map(str, input().lower().split()))

unt=set(a).union(set(b))
unt=sorted(list(unt))

its=set(a).intersection(set(b))
its=sorted(list(its))

for i in unt:
    print(i, end=" ")
print()
for i in its:
    print(i, end=" ")






