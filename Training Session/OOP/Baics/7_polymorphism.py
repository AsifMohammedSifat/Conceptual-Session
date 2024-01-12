# Compile Time -> early binding -> Static Binding -> Overloading
# Run Time -> late binding -> dynamic Binding -> Overriding

class Calculator:
    def add(self,num1,num2,num3=None):
        if num3 is None:
            return num1+num2
        return num1+num2+num3

c = Calculator()
print(c.add(1,2,3))