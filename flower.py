from plant import *

from enum import Enum


class Type(Enum):
    GARDEN = 1
    WILD = 2
    HOUSE = 3


# ----------------------------------------------
class Flower(Plant):
    def __init__(self):
        super().__init__()
        self.type = Type.GARDEN

    def ReadStrArray(self, strArray, i):
        if i >= len(strArray):
            return 0
        if strArray[i] == "GARDEN":
            self.type = Type.GARDEN
        if strArray[i] == "WILD":
            self.type = Type.WILD
        if strArray[i] == "HOUSE":
            self.type = Type.HOUSE
        i += 1
        return i
    
    def Write(self, ostream, i):
        ostream.write("{}: Flower: name = {}, Type = {}, GetQuotient = {}".format \
                          (i, self.name, self.type, self.GetQuotient()))
        pass

    def GetQuotient(self):
        length = len(self.name)
        vowels = 0
        for i in range(length):
            if self.name[i] == 'a' or self.name[i] == 'o' or self.name[i] == 'e' or self.name[i] == 'u' \
                    or self.name[i] == 'i':
                vowels += 1
        return float(vowels / length)
        pass
