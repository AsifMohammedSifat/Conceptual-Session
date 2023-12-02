# Cat-> sound + eat

class Animal:
    def __init__(self,name) -> None:
        self.name = name
    def eat(self):
        print(self.name," can eat")

class Cat(Animal):
    def sound(self):
        print(self.name," sounds like meow")

class Dog(Animal):
    def sound(self):
        print(self.name," sounds like bark")

cat = Cat("Cat")
cat.sound()

