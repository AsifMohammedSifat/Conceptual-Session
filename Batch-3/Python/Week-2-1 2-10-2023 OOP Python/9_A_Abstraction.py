""" 
We cannot create object of abstract classs

"""

from abc import ABC, abstractmethod

class Shape(ABC):  # Define an abstract class using ABC

    @abstractmethod
    def area(self):
        pass

class Circle(Shape):

    def __init__(self, radius):
        self.radius = radius

    def area(self):
        return 3.14 * self.radius * self.radius

class Rectangle(Shape):

    def __init__(self, length, width):
        self.length = length
        self.width = width

    def area(self):
        return self.length * self.width

# Attempting to create an instance of the abstract class Shape will raise a TypeError.
# shape = Shape()  # This will result in an error.

# Creating instances of concrete subclasses
circle = Circle(5)
rectangle = Rectangle(4, 6)

# Calling methods on concrete subclasses
print("Circle Area:", circle.area())        # Output: 78.5
print("Rectangle Area:", rectangle.area())    # Output: 24
