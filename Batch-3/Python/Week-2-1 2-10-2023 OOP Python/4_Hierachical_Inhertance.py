""" Hierarchical Inheritance: """

class Parent:
    def __init__(self, name):
        self.name = name

    def show_info(self):
        print(f"Parent's name is {self.name}")

class Child1(Parent):
    def __init__(self, name, hobby):
        super().__init__(name)
        self.hobby = hobby

    def show_info(self):
        super().show_info()
        print(f"Child1's hobby is {self.hobby}")

class Child2(Parent):
    def __init__(self, name, school):
        super().__init__(name)
        self.school = school

    def show_info(self):
        super().show_info()
        print(f"Child2 goes to {self.school}")

# Creating instances of the classes
parent = Parent("John")
child1 = Child1("Alice", "Painting")
child2 = Child2("Bob", "XYZ School")

# Calling the show_info method on instances
parent.show_info()  # Output: Parent's name is John
child1.show_info()  # Output: Parent's name is Alice, Child1's hobby is Painting
child2.show_info()  # Output: Parent's name is Bob, Child2 goes to XYZ School
