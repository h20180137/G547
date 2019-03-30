Block Device Driver(Disk on RAM)


>Download the main.c partition.h and Makefile

>Go to the place where code is downloaded and give the command $ make all

>insert the module using sudo insmod main.ko

>check if module is loaded using lsmod command

>Check the partition info using  ls -l /dev/dof*
or sudo fdisk -l

>we have created 2 Parititions of the Device

>Use dd command to check the functioning of disk
dd if=/dev/dof of=dumpp count=(any number)


>Take root access using sudo -s command 

>to write into disk use cat > /dev/dof ,type something & press enter and ctrl+z
to read back from the disk on command line use command xxd /dev/dof | less

>remove the module using sudo rmmod main.ko


If there is an issue removing module close terminal and again open terminal and then remove.
