class RAM():
    # atribut
    __priceRAM = 0
    __capacityRAM = 0

    # constructor
    def __init__(self):
        self.__priceRAM = 0
        self.__capacityRAM = 0

    # membuat get set method harga RAM
    def setPriceRAM(self, priceRAM):
        self.__priceRAM = priceRAM

    def getPriceRAM(self):
        return self.__priceRAM

    # membuat get set method kapasitas RAM
    def setCapacityRAM(self, capacityRAM):
        self.__capacityRAM = capacityRAM

    def getCapacityRAM(self):
        return self.__capacityRAM

    # menampilkan data ram
    def printRAM(self):
        print("RAM Price(IDR)       : " + str(self.getPriceRAM()))
        print("RAM Capacity(GB)     : " + str(self.getCapacityRAM()))
        print("---------------------------------------")
