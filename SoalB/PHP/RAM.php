<?php

class RAM
{
    /* atribut */
    private $priceRAM, $capacityRAM;

    /* constructor */
    function __construct($priceRAM, $capacityRAM)
    {
        $this->priceRAM = $priceRAM;
        $this->capacityRAM = $capacityRAM;
    }

    /* membuat get set method untuk harga RAM */
    function setPriceRAM($priceRAM)
    {
        $this->priceRAM = $priceRAM;
    }
    function getPriceRAM()
    {
        return $this->priceRAM;
    }

    /* Membuat get set method kapasitas RAM */
    function setCapacityRAM($capacityRAM)
    {
        $this->capacityRAM = $capacityRAM;
    }
    function getCapacityRAM()
    {
        return $this->capacityRAM;
    }

    /* menampilkan hasil data RAM*/
    function printRAM()
    {
        echo "RAM Price(IDR)        : " . $this->getPriceRAM() . "<br/>";
        echo "RAM Capacity(GB)      : " . $this->getCapacityRAM() . "<br/>";
        echo "******************************" . "<br/>";
    }

    /*destructor */
    function __destruct()
    {
    }
}
