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