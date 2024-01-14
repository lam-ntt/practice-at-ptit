
a, k, n=map(int, input().split())
ok=0
for b in range(k-a%k, n+1-a, k):
    ok=1
    print(b, end=" ")
if not ok: print(-1)