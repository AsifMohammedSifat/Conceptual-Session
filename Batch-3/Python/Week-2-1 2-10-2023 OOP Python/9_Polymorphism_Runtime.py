'''
Runtime Polymorphism or Mehtod Overriding or late binding
'''
class vehicle:
    def __init__(self,name,color):
        self.name = name
        self.color = color
    def details(self):
        print("Car Name=",self.name,"Color=",self.color)
    def maxSpeed(self):
        self.details()
        print("Max speed is 1500CC\n","========")

class car(vehicle):
    def maxSpeed(self):
        self.details()
        print("Max speed is 1200CC")

obVehicle = vehicle("Bike","Red")
obVehicle.maxSpeed()

obCar = car("Car Toyota","Green")
obCar.maxSpeed()
