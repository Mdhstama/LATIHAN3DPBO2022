<?php


class PC
{
    /* atribut */
    private $CPU, $RAM, $DISK;
    private $pcPrice;

    /* construct */
    function __construct($CPU, $RAM, $DISK, $pcPrice)
    {
        $this->CPU = $CPU;
        $this->RAM = $RAM;
        $this->DISK = $DISK;
        $this->pcPrice = $pcPrice;
    }

    /* Membuat get set untuk class CPU */
    function setCPU($CPU)
    {
        $this->CPU = $CPU;
    }
    function getCPU()
    {
        return $this->CPU;
    }

    /* Membuat get set untuk class RAM */
    function setRAM($RAM)
    {
        $this->RAM = $RAM;
    }
    function getRAM()
    {
        return $this->RAM;
    }

    /* Membuat get set untuk class DISK */
    function setDISK($DISK)
    {
        $this->DISK = $DISK;
    }
    function getDISK()
    {
        return $this->DISK;
    }

    /* Membuat get set untuk menghitung total harga */
    function setPcPrice($pcPrice)
    {
        $this->pcPrice = $pcPrice;
    }
    function getPcPrice()
    {
        return $this->pcPrice;
    }

    /* menampilkan hasil data PC */
    function printPC()
    {
        $this->CPU->printCPU();
        $this->RAM->printRAM();
        $this->DISK->printDISK();
        echo "Total Price(IDR)      : " . $this->getPcPrice() . "<br/>";
        echo "******************************" . "<br/>";
    }

    /*destructor */
    function __destruct()
    {
    }
}
