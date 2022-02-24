class DISK():
    # atribut
    __priceDISK = 0
    __typeDISK = ""
    __capacityDISK = 0

    # constructor
    def __init__(self):
        self.__priceDISK = 0
        self.__typeDISK = ""
        self.__capacityDISK = 0

    # membuat get set method harga DISK
    def setPriceDISK(self, priceDISK):
        self.__priceDISK = priceDISK

    def getPriceDISK(self):
        return self.__priceDISK

    # membuat get set method tipe DISK
    def setTypeDISK(self, typeDISK):
        self.__typeDISK = typeDISK

    def getTypeDISK(self):
        return self.__typeDISK

    # membuat get set method kapasitas disk
    def setCapacityDISK(self, capacityDISK):
        self.__capacityDISK = capacityDISK

    def getCapacityDISK(self):
        return self.__capacityDISK

    # menampilkan data disk
    def printDISK(self):
        print("DISK Price(IDR)      : " + str(self.getPriceDISK()))
        print("DISK Type            : " + str(self.getTypeDISK()))
        print("DISK Capacity(GB)    : " + str(self.getCapacityDISK()))
        print("---------------------------------------")
