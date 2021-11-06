from plant import *
from enum import Enum


class Month(Enum):
    JANUARY = 1
    FEBRUARY = 2from plant import *
from enum import Enum


class Month(Enum):
    JANUARY = 1
    FEBRUARY = 2
    MARCH = 3
    APRIL = 4
    MAY = 5
    JUNE = 6
    JULY = 7
    AUGUST = 8
    SEPTEMBER = 9
    OCTOBER = 10
    NOVEMBER = 11
    DECEMBER = 12


# ----------------------------------------------
class Bush(Plant):
    def __init__(self):
        super().__init__()
        self.month = Month.JANUARY

    def ReadStrArray(self, strArray, i):
        if i >= len(strArray):
            return 0
        if strArray[i] == "JANUARY":
            self.month = Month.JANUARY
        if strArray[i] == "FEBRUARY":
            self.month = Month.FEBRUARY
        if strArray[i] == "MARCH":
            self.month = Month.MARCH
        if strArray[i] == "APRIL":
            self.month = Month.APRIL
        if strArray[i] == "MAY":
            self.month = Month.MAY
        if strArray[i] == "JUNE":
            self.month = Month.JUNE
        if strArray[i] == "JULY":
            self.month = Month.JULY
        if strArray[i] == "AUGUST":
            self.month = Month.AUGUST
        if strArray[i] == "SEPTEMBER":
            self.month = Month.SEPTEMBER
        if strArray[i] == "OCTOBER":
            self.month = Month.OCTOBER
        if strArray[i] == "NOVEMBER":
            self.month = Month.NOVEMBER
        if strArray[i] == "DECEMBER":
            self.month = Month.DECEMBER
        i += 1
        return i

    def Write(self, ostream, i):
        ostream.write("{}: Bush: month = {}, name = {}, GetQuotient = {}".format \
                          (i, self.month, self.name, self.GetQuotient()))
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

    MARCH = 3
    APRIL = 4
    MAY = 5
    JUNE = 6
    JULY = 7
    AUGUST = 8
    SEPTEMBER = 9
    OCTOBER = 10
    NOVEMBER = 11
    DECEMBER = 12


# ----------------------------------------------
class Bush(Plant):
    def __init__(self):
        super().__init__()
        self.month = Month.JANUARY

    def ReadStrArray(self, strArray, i):
        if i >= len(strArray):
            return 0
        if strArray[i] == "JANUARY":
            self.month = Month.JANUARY
        if strArray[i] == "FEBRUARY":
            self.month = Month.FEBRUARY
        if strArray[i] == "MARCH":
            self.month = Month.MARCH
        if strArray[i] == "APRIL":
            self.month = Month.APRIL
        if strArray[i] == "MAY":
            self.month = Month.MAY
        if strArray[i] == "JUNE":
            self.month = Month.JUNE
        if strArray[i] == "JULY":
            self.month = Month.JULY
        if strArray[i] == "AUGUST":
            self.month = Month.AUGUST
        if strArray[i] == "SEPTEMBER":
            self.month = Month.SEPTEMBER
        if strArray[i] == "OCTOBER":
            self.month = Month.OCTOBER
        if strArray[i] == "NOVEMBER":
            self.month = Month.NOVEMBER
        if strArray[i] == "DECEMBER":
            self.month = Month.DECEMBER
        i += 1
        return i

    def Write(self, ostream, i):
        ostream.write("{}: Bush: month = {}, name = {}, GetQuotient = {}".format \
                          (i, self.month, self.name, self.GetQuotient()))
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
