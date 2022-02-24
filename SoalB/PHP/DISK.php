<?php

class DISK
{
    /* atribut */
    private $priceDISK, $typeDISK, $capacityDISK;

    /* construct */
    function __construct($priceDISK, $typeDISK, $capacityDISK)
    {
        $this->priceDISK = $priceDISK;
        $this->typeDISK = $typeDISK;
        $this->capacityDISK = $capacityDISK;
    }

    /* Membuat get set method harga DISK */
    function setPriceDISK($priceDISK)
    {
        $this->priceDISK = $priceDISK;
    }
    function getPriceDISK()
    {
        return $this->priceDISK;
    }

    /* Membuat get set method tipe DISK */
    function setTypeDISK($typeDISK)
    {
        $this->typeDISK = $typeDISK;
    }
    function getTypeDISK()
    {
        return $this->typeDISK;
    }

    /* Membuat get set method kapasitas DISK */
    function setCapacityDISK($capacityDISK)
    {
        $this->capacityDISK = $capacityDISK;
    }
    function getCapacityDISK()
    {
        return $this->capacityDISK;
    }

    /* menampilkan hasil data DISK */
    function printDISK()
    {
        echo "DISK Price(IDR)       : " . $this->getPriceDISK() . "<br/>";
        echo "DISK Type             : " . $this->getTypeDISK() . "<br/>";
        echo "DISK Capacity(GB)     : " . $this->getCapacityDISK() . "<br/>";
        echo "******************************" . "<br/>";
    }

    /*destructor */
    function __destruct()
    {
    }
}
