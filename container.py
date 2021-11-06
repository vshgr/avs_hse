from extender import *


# ----------------------------------------------
class Container:
    def __init__(self):
        self.store = []

    def Write(self, ostream):
        ostream.write("Container is store {} plants:\n".format(len(self.store)))
        i = 0
        for plant in self.store:
            plant.Write(ostream, i)
            ostream.write("\n")
            i += 1
        pass

    def Sort(self):
        length = len(self.store)
        for i in range(length):
            for j in range(0, length - i - 1):
                item1 = self.store[j]
                item2 = self.store[j + 1]
                if isinstance(item1, Plant) and isinstance(item2, Plant):
                    if item1.GetQuotient() < item2.GetQuotient():
                        self.store[j], self.store[j + 1] = self.store[j + 1], self.store[j]
        pass
