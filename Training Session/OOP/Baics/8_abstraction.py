    #     Project->Database
    # App                 Dekstop  

from abc import ABC, abstractmethod
class Project(ABC):
    balance = 50
    def details(self):
        print("Total Balance", self.balance)
    @abstractmethod
    def security(self):
        pass

    
class App(Project):
    def security(self):
        pass
    def details(self):
        print("I am inside the app")

c = Project()
c.details()