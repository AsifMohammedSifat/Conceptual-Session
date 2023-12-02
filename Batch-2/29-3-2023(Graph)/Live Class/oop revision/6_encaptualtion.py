# public -
# private - 
# protected - flexibilaty

class Person:
    def __init__(self,name) -> None:
        self.name = name
        self._amount = 50
    def details(self):
        print("Name=",self.name," Amount=",self._amount)


p = Person("Asad")
# print("Before change")
# p.details()

# p.__amount = 0
# print("After change")
# p.details()

# print(p.__dict__)

print(p._amount)

