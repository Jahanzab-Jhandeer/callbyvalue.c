#include<stdio.h>
// print te address with "call by value"
void printaddress(int n);

int main () {
   int n = 4;
   printaddress(n);
   printf("address of n is : %u\n" , &n);

return 0;
}
void printaddress(int n) {
    printf("address of n is : %u\n" , &n);
}