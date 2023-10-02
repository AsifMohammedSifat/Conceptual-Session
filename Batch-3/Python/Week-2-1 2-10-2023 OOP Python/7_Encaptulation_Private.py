'''
    Encaptulation Access Modifier.
    Ans: Public , Private , Protected
    How to create Private member?
'''

class student:
    def __init__(self,name,id):
        self.name = name
        self.__id = id #private variable
    def details(self):
        print("Name=",self.name,"ID=",self.__id)



obStudent = student("Asif",25)
# print(object.__id) #show error
print("Before Re-assign")
obStudent.details()

print("After Re-assign")
obStudent.__id = -30 #re-assign and dont show any error.but variable is private thats why it create a new object
obStudent.details()  #id didnot change. still.id=25

print(obStudent.__dict__)

