#include <stdio.h> 
#include<stdlib.h>
#include<fcntl.h>
#include <unistd.h>
#include <sys/types.h>
#include <stdint.h>
#define adxl_x "/dev/adxl_x"
#define adxl_y "/dev/adxl_y"
#define adxl_z "/dev/adxl_z"

int main()

{ 
  int fd,n;
  uint16_t lol;
do{
  printf("\nEnter which axis data do you want\n1 for xaxis \n2 for yaxis \n3 for zaxis\nPress 9 to exit\n");
  
  scanf("%d",&n);
  
  if(n==1)
  {
  fd=open(adxl_x, O_RDWR);//OPEN FOR READING AND WRITING for read only use O_RDONLY
  
  if(fd  == -1)
  {
  
    printf("file %s does not exit or locked by another process\n",adxl_x);
    exit(-1);
  }
  
  read(fd,&lol,2);
  printf("accelerometer :\nX axis value is %d\n",lol);
  }
  else if(n==2)
  {
  fd=open(adxl_y , O_RDWR);//OPEN FOR READING AND WRITING for read only use O_RDONLY
  
  if(fd  == -1)
  {
  
    printf("file %s does not exit or locked by another process\n",adxl_y);
    exit(-1);
  }
  
  read(fd,&lol,2);
  printf("accelerometer:\nY axis value is %d\n",lol);
  }
  else if(n==3)
  {
  fd=open(adxl_z, O_RDWR);//OPEN FOR READING AND WRITING for read only use O_RDONLY
  
  if(fd  == -1)
  {
  
    printf("file %s does not exit or locked by another process\n",adxl_z);
    exit(-1);
  }
  
  read(fd,&lol,2);
  printf("accelerometer :\nZ axis value is %d\n",lol);
  }
else if(n==9)
printf("Thank You\n");
else
printf("Wrong Button pressed\n");
}while(n!=9);
  close(fd);
  
  
  return 0;
}
