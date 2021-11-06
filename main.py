import sys
import string
import time

from extender import *
from randomInput import *

# ----------------------------------------------
if __name__ == '__main__':
    start = time.time()
    print('==> Started')
    if len(sys.argv) == 5:
        type = sys.argv[1]
        if type == "-f":
            inputFileName = sys.argv[2]
            outputFileName1 = sys.argv[3]
            outputFileName2 = sys.argv[4]
        elif type == "-n":
            randomNumber = int(sys.argv[2])
            outputFileName1 = sys.argv[3]
            outputFileName2 = sys.argv[4]
        else:
            print("Incorrect type")
            exit()
    else:
        print("Incorrect count of arguments")
        exit()
    if type == "-n":
        if randomNumber < 0 or randomNumber > 10000:
            print("Incorrect count of items, enter number between 0 and 10000")
            exit()
    if type == "-f":
        ifile = open(inputFileName)
        strArray = ifile.read()
        ifile.close()
    else:
        strArray = RandomInput(randomNumber)
    # Формирование массива строк, содержащего чистые данные в виде массива строк символов.
    strArray = strArray.replace("\n", " ").split(" ")

    container = Container()
    if len(strArray) >= 3:
        num = ReadStrArray(container, strArray)
    ofile1 = open(outputFileName1, 'w')
    container.Write(ofile1)
    ofile1.close()

    container.Sort()
    ofile2 = open(outputFileName2, 'w')
    ofile2.write("Sorted container:\n")
    container.Write(ofile2)
    ofile2.close()
    end = time.time()
    print("==> Finished\n" + "Time elapsed:\n" + (end - start).__str__() + " seconds")
