


class Item:
    def __init__(self):
        self.code=input()
        self.name=input()
        self.num=int(input())
        self.perprice=int(input())
        self.discount=int(input())

    def cal(self):
        self.price=self.num*self.perprice-self.discount

    def __repr__(self):
        return (f"{self.code} {self.name} {self.num} {self.perprice} "
                f"{self.discount} {self.price}")

if __name__=="__main__":
    t=int(input())
    a=[]
    while t!=0:
        i=Item()
        i.cal()
        a.append(i)
        t-=1

    a=sorted(a, key=lambda i: -i.price)
    for i in a:
        print(i)
