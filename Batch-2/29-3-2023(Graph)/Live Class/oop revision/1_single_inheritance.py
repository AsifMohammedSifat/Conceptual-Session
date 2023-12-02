# Cat-> sound + eat

class Animal:
    def __init__(self,name) -> None:
        self.name = name
    def eat(self):
        print(self.name," can eat")

class Cat(Animal):
    def sound(self):
        print(self.name," sounds like meow")
    def __repr__(self) -> str:
        return "I am cat class"

cat = Cat("Cat")
# cat.sound()
print(cat)

