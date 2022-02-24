<?php

class CPU
{
    /* atribut */
    private $nameCPU, $priceCPU;

    /* constructor */
    function __construct($priceCPU, $nameCPU)
    {
        $this->priceCPU = $priceCPU;
        $this->nameCPU = $nameCPU;
    }

    /* Membuat get set method harga CPU */
    function setPriceCPU($priceCPU)
    {
        $this->priceCPU = $priceCPU;
    }
    function getPriceCPU()
    {
        return $this->priceCPU;
    }

    /* Membuat get set method nama CPU */
    function setNameCPU($nameCPU)
    {
        $this->nameCPU = $nameCPU;
    }
    function getNameCPU()
    {
        return $this->nameCPU;
    }

    /* menampilkan hasil data CPU */
    function printCPU()
    {
        echo "******************************" . "<br/>";
        echo "CPU Price(IDR)        : " . $this->getPriceCPU() . "<br/>";
        echo "CPU Name              : " . $this->getNameCPU() . "<br/>";
        echo "******************************" . "<br/>";
    }

    /*destructor */
    function __destruct()
    {
    }
}
