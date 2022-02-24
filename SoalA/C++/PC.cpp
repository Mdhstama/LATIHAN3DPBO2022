#include <iostream>
#include <string>

using namespace std;

/* memanggil class */
#include "CPU.cpp"
#include "RAM.cpp"
#include "DISK.cpp"

class PC
{
    /* membuat atribut */
private:
    CPU cpuA;
    RAM ramB;
    DISK diskC;
    int pcPrice;

public:
    /* constructor */
    PC(CPU cpuA, RAM ramB, DISK diskC, int pcPrice)
    {
        this->cpuA = cpuA;
        this->ramB = ramB;
        this->diskC = diskC;
        this->pcPrice = pcPrice;
    }

    PC()
    {
    }

    /* Membuat get set untuk class CPU */
    void setCPU(CPU cpuA)
    {
        this->cpuA = cpuA;
    }
    CPU getCPU()
    {
        return this->cpuA;
    }

    /* Membuat get set untuk class RAM */
    void setRAM(RAM ramB)
    {
        this->ramB = ramB;
    }
    RAM getRAM()
    {
        return this->ramB;
    }

    /* Membuat get set untuk class DISK */
    void setDISK(DISK diskC)
    {
        this->diskC = diskC;
    }
    DISK getDISK()
    {
        return this->diskC;
    }

    /* Membuat get set untuk menghitung total harga */
    void setPcPrice(int pcPrice)
    {
        this->pcPrice = pcPrice;
    }
    int getPcPrice()
    {
        return this->pcPrice;
    }

    /* menampilkan data semua */
    void printPC()
    {
        this->cpuA.printCPU();
        this->ramB.printRAM();
        this->diskC.printDISK();
        cout << "PC Price(IDR)      : " << this->getPcPrice() << endl;
        cout << "====================================================" << endl;
    }

    /* destructor */
    ~PC()
    {
    }
};
