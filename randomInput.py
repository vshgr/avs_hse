import random
import string
from extender import *


def RandomInput(number):
    types = ["WILD", "GARDEN", "HOUSE"]
    months = ["JANUARY", "FEBRUARY", "MARCH", "APRIL", "MAY", "JUNE", "JULY", "AUGUST", "SEPTEMBER", "OCTOBER",
              "NOVEMBER", "DECEMBER"]
    final_str = ""
    counter = 0
    while counter != number:
        random_type = random.randint(1, 3)
        final_str += random_type.__str__() + "\n"
        # Рандомное имя
        text_length = random.randint(1, 20)
        for i in range(text_length):
            final_str += random.choice(string.ascii_letters)
        final_str += "\n"
        if random_type == 1:
            final_str += random.randint(1, 100000).__str__()
        elif random_type == 2:
            final_str += random.choice(types)
        else:
            final_str += random.choice(months)
        counter += 1
        if counter != number:
            final_str += "\n"
    return final_str
