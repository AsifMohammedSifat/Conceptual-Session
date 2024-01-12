class Animal:
    def __init__(self,name) -> None:
        self.name = name
    def intro(self):
        print("I am a ",self.name)


class Cat(Animal):
    def __init__(self, name) -> None:
        super().__init__(name)
        
    def sound(self):
        print("My sounds like Meoow")

class Dog(Animal):
    def sound(self):
        print("My sounds like Bark")


c = Cat("Cat")
c.intro()
c.sound()

d = Dog("Dog")
d.intro()
d.sound()