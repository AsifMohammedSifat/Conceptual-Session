========================================================================================================================================
                                                        Has-A Relationship:

class Engine:
    def start(self):
        print("Engine starts")

class Car:
    def __init__(self):
        self.engine = Engine()

    def drive(self):
        print("Car is driving")

# Car "has a" Engine
my_car = Car()
my_car.drive()      # Specific to Car
my_car.engine.start()  # Delegated to Engine

===================================================================================================================================
                                                              Is-A Relationship:
class Animal:
    def speak(self):
        print("Animal speaks")

class Dog(Animal):
    def bark(self):
        print("Dog barks")

# Dog "is a" type of Animal
my_dog = Dog()
my_dog.speak()  # Inherited from Animal
my_dog.bark()   # Specific to Dog
