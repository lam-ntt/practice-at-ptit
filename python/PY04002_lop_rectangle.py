
class Rectangle:
    def __init__(self, length, width, colr):
        self.length=length
        self.width=width
        self.colr=colr.capitalize()

    def perimeter(self):
        return 2*(self.length+self.width)

    def area(self):
        return self.length*self.width

    def color(self):
        return self.colr

arr = input().split()
if int(arr[0])>0 and int(arr[1])>0:
    r = Rectangle(int(arr[0]), int(arr[1]), arr[2])
    print('{} {} {}'.format(r.perimeter(), r.area(), r.color()))
else:
    print("INVALID")

