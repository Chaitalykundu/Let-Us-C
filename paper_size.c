#include<stdio.h>
int main()
{
    int length=1189, breadth=841, pa_length, present;
    for(present=0;present<=8;present++)
    {
        printf("\npaper A%d :size %d*%d",present, length,breadth);
        pa_length=length;
        length=breadth;
        breadth=pa_length/2;
    }
    return 0;
}
