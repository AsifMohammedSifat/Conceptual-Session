# compileTime->static binding->early binding->overloading
# runtime-> dynamic binding ->late binding -> overriding

class Calculator:
    def add(self,a,b,c=-1):
        if c==-1:
            return a+b
        return a+b+c
    
c = Calculator()
print(c.add(2,3))
print(c.add(2,3,5))