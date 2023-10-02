class Grandparent:
    def __init__(self) -> None:
        pass
    def property(self):
        print("I have 5 corer Taka")

class Parent(Grandparent):
    def __init__(self) -> None:
        super().__init__()
    

class Child(Parent):
    def __init__(self) -> None:
        super().__init__()

ami = Child()
ami.property()









""" 
class Grandparent:
    def __init__(self,name) -> None:
        self.name = name
    def property(self):
        print(self.name," have 5 corer Taka")

class Parent(Grandparent):
    def __init__(self,name) -> None:
        super().__init__(name)
    def property(self):
        print(self.name," have 2 corer Taka")

class Child(Parent):
    def __init__(self,name) -> None:
        super().__init__(name)
    def property(self):
        print(self.name," have 1 corer Taka")
 """