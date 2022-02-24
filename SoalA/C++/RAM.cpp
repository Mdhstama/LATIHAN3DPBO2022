#include <iostream>
#include <string>

using namespace std;

class RAM
{
    /* membuat atribut */
private:
    int priceRAM;
    int capacityRAM;

public:
    /* constructor */
    RAM(int priceRAM, int capacityRAM)
    {
        this->priceRAM = priceRAM;
        this->capacityRAM = capacityRAM;
    }

    RAM()
    {
    }

    /* Membuat get set method harga RAM */
    void setPriceRAM(int priceRAM)
    {
        this->priceRAM = priceRAM;
    }
    int getPriceRAM()
    {
        return this->priceRAM;
    }

    /* Membuat get set method kapasitas RAM */
    void setCapacityRAM(int capacityRAM)
    {
        this->capacityRAM = capacityRAM;
    }
    int getCapacityRAM()
    {
        return this->capacityRAM;
    }

    /* menampilkan data DISK */
    void printRAM()
    {
        cout << "RAM Price(IDR)     : " << this->getPriceRAM() << endl;
        cout << "RAM Capacity(GB)   : " << this->getCapacityRAM() << endl;
        cout << "====================================================" << endl;
    }

    /* destructor */
    ~RAM()
    {
    }
};