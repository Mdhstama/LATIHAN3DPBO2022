<?php

/* memanggil class */
require "CPU.php";
require "RAM.php";
require "DISK.php";
require "PC.php";

/* membuat objek dan input */
$amd = new CPU(8500000, "AMD Ryzen 9 5900X");
$hynix = new RAM(7000000, 32);
$samsung = new DISK(1900000, "SSD NVME", 512);

/* menghitung total harga */
$total = $amd->getPriceCPU() + $hynix->getPriceRAM() + $samsung->getPriceDISK();

/* memasukan data ke dalam file PC */
$adit = new PC($amd, $hynix, $samsung, $total);

/* menampilkan output */
echo "******************************" . "<br/>";
echo "PHP Language" . "<br/>";
$adit->printPC();
