#include <iostream>
#include <string>

using namespace std;

class CPU
{
    /* membuat atribut */
private:
    string nameCPU;
    int priceCPU;

public:
    /* consturctor */
    CPU(int priceCPU, string nameCPU)
    {
        this->priceCPU = priceCPU;
        this->nameCPU = nameCPU;
    }

    CPU()
    {
    }

    /* Membuat get set method harga CPU */
    void setPriceCPU(int priceCPU)
    {
        this->priceCPU = priceCPU;
    }
    int getPriceCPU()
    {
        return this->priceCPU;
    }

    /* Membuat get set method nama CPU */
    void setNameCPU(string nameCPU)
    {
        this->nameCPU = nameCPU;
    }
    string getNameCPU()
    {
        return this->nameCPU;
    }

    /* menampilkan data CPU */
    void printCPU()
    {
        cout << "====================================================" << endl;
        cout << "CPU Price(IDR)     : " << this->getPriceCPU() << endl;
        cout << "CPU Name           : " << this->getNameCPU() << endl;
        cout << "====================================================" << endl;
    }

    /* destructor */
    ~CPU()
    {
    }
};