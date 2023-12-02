# GrandFather - 5 corer
# |
# Father - 3 corer
# |
# Ami - 2 corer


class GrandFather:
    def property(self):
        print("I have 5 corer taka")
    
class Father(GrandFather):
    def property(self):
        print("I have 3 corer taka")
    def father(self):
        super().property()

class Child(Father):
    def property(self):
        print("I have 2 corer taka")
    def father(self):
        super().property()
    def grandFather(self):
        super().father()

ami = Child()
ami.property()
ami.father()
ami.grandFather()

    