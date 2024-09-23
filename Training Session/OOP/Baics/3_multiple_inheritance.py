# employee->person+company(name,age,cname,location)
#     person-> name,age
#     company->cname,location


class Person:
    def __init__(self,name,age) -> None:
        self.name = name
        self.age = age
    def personDetails(self):
        print("Name = ",self.name," Age = ",self.age)

class Company:
    def __init__(self,cname,location) -> None:
        self.cname = cname
        self.location = location
    def companyDetails(self):
        print("Company Name = ",self.cname," Location = ",self.location)

class Employee(Person,Company):
    def __init__(self, name, age,cname,location) -> None:
        Person.__init__(self,name, age)
        Company.__init__(self,cname,location)



e = Employee("Labib",25,"Google","USA")
e.companyDetails()
e.personDetails()

print(Employee.mro())
print(Employee.__mro__)



#========================================================================================


MRO stands for **Method Resolution Order**. It is the order in which Python looks for methods and attributes when you call them on an instance of a class, especially in the context of multiple inheritance.

### Key Points about MRO:

1. **Order of Search**: When a method is called, Python searches for it in the class of the instance first, then in the parent classes, and so on, following the MRO.

2. **Linearization**: MRO uses a specific algorithm (C3 linearization) to determine the order in which base classes are considered. This ensures that a class is only considered after its parents, preserving the order of inheritance.

3. **Viewing MRO**: You can view the MRO of a class using the `mro()` method or the `__mro__` attribute. For example:
   ```python
   print(Employee.mro())
   # or
   print(Employee.__mro__)
   ```

4. **Python Version**: In Python 3, MRO is particularly important for classes that use multiple inheritance, as it helps avoid ambiguity about which method to invoke.

### Example:

For a class hierarchy like this:

```python
class A:
    pass

class B(A):
    pass

class C(A):
    pass

class D(B, C):
    pass
```

The MRO for class `D` can be viewed as follows:

```python
print(D.mro())
```

This would output:

```
[<class '__main__.D'>, <class '__main__.B'>, <class '__main__.C'>, <class '__main__.A'>, <class 'object'>]
```

This indicates that when searching for a method in an instance of `D`, Python will look first in `D`, then `B`, then `C`, then `A`, and finally in the base `object` class.
