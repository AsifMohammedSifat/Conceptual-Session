# private-> __ 2 -> double underscore “__”.
# protected-> _1 -> single underscore “_”.

class Student:
    def __init__(self,name,id) -> None:
        self._name = name
        self.id = id

    def details(self):
        print("Name =",self._name," Id =",self.id)


s = Student("Amjad",1)
# print(s._name)
s.details()