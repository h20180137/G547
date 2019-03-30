Block Device Driver
>Download the main.c partition.h and Makefile

>Go to the directory in which code is downloaded and give the command $ make all

>insert the module using sudo insmod main.ko

>check if module is loaded using lsmod command

>Check the partition info using cat /proc/partitions
also check using ls -l /dev/mydisk*
or sudo fdisk -l

>we have created 3 logical and 3 extended Parititions of the Device

>Take root access using sudo -s command 

>to write into disk use cat > /dev/mydisk ,type something & press enter
to read back from the disk on command line use command xxd /dev/mydisk | less


>remove the module using sudo rmmod main.ko



