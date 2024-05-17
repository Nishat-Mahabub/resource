class sample:
    pass

class car:
    def __init__(self,type,color):
        self.dhoron = type
        self.rong = color
    
    def specifiction(self):
        print("Type :",self.dhoron,"Color :",self.rong)

c1 = car("sedan","Black")
c1.specifiction()


