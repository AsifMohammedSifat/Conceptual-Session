'''
Runtime Polymorphism or Mehtod Overloading or early binding binding
'''

class Calculator:
    def add(self, a, b):
        return a + b

    def add(self, a, b, c):
        return a + b + c

calc = Calculator()
result1 = calc.add(1, 2)          # Calls the first add method
result2 = calc.add(1, 2, 3)       # Calls the second add method