class CPU():
    # atribut
    __priceCPU = 0
    __nameCPU = ""

    # constructor
    def __init__(self):
        self.__priceCPU = 0
        self.__nameCPU = ""

    # membuat get set method harga cpu
    def setPriceCPU(self, priceCPU):
        self.__priceCPU = priceCPU

    def getPriceCPU(self):
        return self.__priceCPU

    # membuat get set method nama cpu
    def setNameCPU(self, nameCPU):
        self.__nameCPU = nameCPU

    def getNameCPU(self):
        return self.__nameCPU

    # menampilkan data cpu
    def printCPU(self):
        print("---------------------------------------")
        print("CPU Price(IDR)       : " + str(self.getPriceCPU()))
        print("CPU Name             : " + str(self.getNameCPU()))
        print("---------------------------------------")
