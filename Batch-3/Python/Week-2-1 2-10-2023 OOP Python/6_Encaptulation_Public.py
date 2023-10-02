'''
    What is Encaptulation?
    Ans: Data and Method are binding in a single unit.
    Encaptulation = single unit(data + method)
'''


class student:
    def __init__(self,name,id):
        self.name = name  #data
        self.id = id
    def details(self):    #method
        print("Name=",self.name,"ID=",self.id)


obStudent = student("Rahim",25)

print("Before Re-assign")
obStudent.details()

print("After Re-assign")
obStudent.id = -30 #reassign and dont show any error

obStudent.details()