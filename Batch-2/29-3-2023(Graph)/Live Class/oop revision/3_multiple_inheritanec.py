# employee -> employe
#     name,age -> person
#     company name,location -> company

class Person:
    def __init__(self,pname,age) -> None:
        self.pname = pname
        self.age = age
    def details(self):
        print("Name = ",self.pname," Age=", self.age)

class Company:
    def __init__(self,cname,location) -> None:
        self.cname = cname
        self.location = location
    def details(self):
        print("Company Name = ",self.cname," location=", self.location)


class Employee(Person,Company):
    def __init__(self,pname,age, cname, location) -> None:
        Company.__init__(self,cname,location)
        Person.__init__(self,pname,age)
        


empObj = Employee("Salauddin",27,"Google","USA")
empObj.details()
