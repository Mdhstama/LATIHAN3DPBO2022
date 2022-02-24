# memanggil class
from CPU import CPU
from RAM import RAM
from DISK import DISK

# atribut
__cpuA = CPU()
__ramB = RAM()
__diskC = DISK()
__pcPrice = 0


class PC():
    # constructor
    def __init__(self):
        self.__cpuA = CPU()
        self.__ramB = RAM()
        self.__diskC = DISK()
        self.__pcPrice = 0

    # membuat get set method class CPU
    def setCPU(self, cpuA):
        self.__cpuA = cpuA

    def getCPU(self):
        return self.__cpuA

    # membuat get set method class RAM
    def setRAM(self, ramB):
        self.__ramB = ramB

    def getRAM(self):
        return self.__ramB

    # membuat get set method class DISK
    def setDISK(self, diskC):
        self.__diskC = diskC

    def getDISK(self):
        return self.__diskC

    # membuat get set method total harga PC
    def setPcPrice(self, pcPrice):
        self.__pcPrice = pcPrice

    def getPcPrice(self):
        return self.__pcPrice

    # menampilkan data pc
    def printPC(self):
        self.__cpuA.printCPU()
        self.__ramB.printRAM()
        self.__diskC.printDISK()
        print("PC Price(IDR)        : " + str(self.getPcPrice()))
        print("---------------------------------------")
