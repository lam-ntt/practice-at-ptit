
count=0
class Location:
    def __init__(self, name, time, qty):
        global count
        count+=1
        self.code=format("T%02d" %count)
        self.name=name
        self.time=time
        self.qty=qty

    def __str__(self):
        return f"{self.code} {self.name} "+format("%.2f" %(
            self.qty/self.time*60))


def convert(s):
    return int(s[0:2])*60+int(s[3:])

def find(locations, name):
    for i in locations:
        if i.name==name: return i


if __name__=="__main__":
    t=int(input())
    locations=[]
    name=[]
    while t!=0:
        s, stime, etime, qty=input(), input(), input(), float(input())
        if s in name:
            l=find(locations, s)
            l.time+=convert(etime)-convert(stime)
            l.qty+=qty
        else:
            name.append(s)
            l=Location(s, convert(etime)-convert(stime), qty)
            locations.append(l)
        t-=1

    for i in locations:
        print(i)

