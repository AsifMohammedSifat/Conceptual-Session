# Grandparent->5 corer 
# parent-> 3 corer  
# amar->1 corer 


class GrandParent:
    def property(self):
        print("I have 5 corer taka")

class Parent(GrandParent):
    def property(self):
        print("I have 3 corer taka")

    def father_property(self):
        super().property()

class Child(Parent):
    def property(self):
        print("I have 2 corer taka")
    def father_property(self):
        super().property()
    def grand_property(self):
        super().father_property()

c = Child()
c.property()
c.father_property()
c.grand_property()