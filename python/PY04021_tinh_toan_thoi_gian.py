

def convert(s):
    return int(s[:2])*60+int(s[3:])

class Bill:
    def __init__(self):
        self.code=input()
        self.name=input()
        self.time=-convert(input())+convert(input())

    def __str__(self):
        return (f"{self.code} {self.name} {self.time//60} gio {self.time%60} "
                f"phut")

if __name__=="__main__":
    t=int(input())
    a=[]
    while t!=0:
        b=Bill()
        a.append(b)
        t-=1

    a=sorted(a, key=lambda i: -i.time)
    for i in a:
        print(i)
