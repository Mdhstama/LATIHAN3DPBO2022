#include <iostream>
#include <string>

using namespace std;

class DISK
{
    /* membuat atribut */
private:
    int priceDISK;
    string typeDISK;
    int capacityDISK;

public:
    /* constructor */
    DISK(int priceDISK, string typeDISK, int capacityDISK)
    {
        this->priceDISK = priceDISK;
        this->typeDISK = typeDISK;
        this->capacityDISK = capacityDISK;
    }

    DISK()
    {
    }

    /* Membuat get set method harga DISK */
    void setPriceDISK(int priceDISK)
    {
        this->priceDISK = priceDISK;
    }
    int getPriceDISK()
    {
        return this->priceDISK;
    }

    /* Membuat get set method tipe DISK */
    void setTypeDISK(string typeDISK)
    {
        this->typeDISK = typeDISK;
    }
    string getTypeDISK()
    {
        return this->typeDISK;
    }

    /* Membuat get set method kapasitas DISK */
    void setCapacityDISK(int capacityDISK)
    {
        this->capacityDISK = capacityDISK;
    }
    int getCapacityDISK()
    {
        return this->capacityDISK;
    }

    /* menampilkan data DISK */
    void printDISK()
    {
        cout << "DISK Price(IDR)    : " << this->getPriceDISK() << endl;
        cout << "DISK Type          : " << this->getTypeDISK() << endl;
        cout << "DISK Capacity(GB)  : " << this->getCapacityDISK() << endl;
        cout << "====================================================" << endl;
    }

    /* destructor */
    ~DISK()
    {
    }
};