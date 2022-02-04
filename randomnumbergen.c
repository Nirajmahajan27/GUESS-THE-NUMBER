#include<stdio.h>
 #include<stdlib.h>
#include<time.h>

int main(){
    int number, guess, nguesses=1;
    srand(time(0));
    number= rand()%100 + 1; // Generates a random number between 1 and 100
    //  printf("The number is %d\n", number);
    // Keep running the lop untill the number is gussed
    return 0;
}