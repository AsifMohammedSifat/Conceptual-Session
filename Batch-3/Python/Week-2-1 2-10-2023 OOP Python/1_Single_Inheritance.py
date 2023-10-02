""" Single Inheritance """


class Animal:
    def __init__(self,name) -> None:
        self.name = name
    def eat(self):
        print(f'{self.name} is eating')
        print(self.name,"is eating 2")


class Cat(Animal):
    def __init__(self,name) -> None:
        # self.name = name              #type - 1
        # Animal.__init__(self,name)    #type - 2
        super().__init__(name)          #type - 3

    # def eat(self):
    #     print(self.name,"is eating")

cat =  Cat("Cat")

cat.eat()
