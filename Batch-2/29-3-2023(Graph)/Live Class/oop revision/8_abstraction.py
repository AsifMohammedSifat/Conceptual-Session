# senior-> Project->Database
#           |
# dekstop         mobile
# login           login


from abc import ABC,abstractmethod
class Project(ABC):
    def details(self):
        self.balance =50
        print("I am core project")
    @abstractmethod
    def security(self):
        pass
class App(Project):
    def security():
        pass
    def details(self):
        print("I am from app")

b = Project()
print(b.balance)