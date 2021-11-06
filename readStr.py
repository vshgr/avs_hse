from extender import *


def ReadStrArray(container, strArray):
    arrayLen = len(strArray)
    i = 0  # Индекс, задающий текущую строку в массиве
    num = 0
    while i < arrayLen:
        str = strArray[i]
        key = int(str)  # преобразование типа растения в целое
        if key == 1:  # дерево
            i += 1
            plant = Tree()
            plant.name = strArray[i]
            i += 1
            i = plant.ReadStrArray(strArray, i)
        elif key == 2:  # цветок
            i += 1
            plant = Flower()
            plant.name = strArray[i]
            i += 1
            i = plant.ReadStrArray(strArray, i)
        elif key == 3:  # куст
            i += 1
            plant = Bush()
            plant.name = strArray[i]
            i += 1
            i = plant.ReadStrArray(strArray, i)
        else:
            return num
        if i == 0:
            return num
        num += 1
        container.store.append(plant)
    return num
