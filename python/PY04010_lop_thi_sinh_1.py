
class Student:
    def __init__(self):
        self.name=input()
        self.birth=input()
        self.score=float(input())+float(input())+float(input())

    def __str__(self):
        return f"{self.name} {self.birth} "+format("%.1f" %self.score)

if __name__=="__main__":
    s=Student()
    print(s)

