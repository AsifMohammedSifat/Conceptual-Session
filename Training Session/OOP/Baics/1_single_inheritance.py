class Animal:
    def __init__(self,name) -> None:
        self.name = name
    def intro(self):
        print("I am a ",self.name)

class Cat(Animal):
    def __init__(self, name) -> None:
        Animal.__init__(self,name)
        # super().__init__(name)
    def sound(self):
        print("My sounds like Meoow")
    def __repr__(self) -> str:
        return "I am Cat Class"
    

c = Cat("Cat")
c.intro()
c.sound()

print(c)