from plant import *


# ----------------------------------------------
class Tree(Plant):
    def __init__(self):
        super().__init__()
        self.age = 0

    def ReadStrArray(self, strArray, i):
        if i >= len(strArray):
            return 0
        self.age = int(strArray[i])
        i += 1
        return i

    def Print(self, i):
        print(i, ": Tree: age = ", self.age, ", name = ", self.name, ", Quotient = ", self.GetQuotient())
        pass

    def Write(self, ostream, i):
        ostream.write("{}: Tree: age = {}, name = {}, GetQuotient = {}".format \
                          (i, self.age, self.name, self.GetQuotient()))
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
