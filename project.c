#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    int number, guess, nguesses=1;
    srand(time(0));
    number= rand()%100 + 1; // Generates a random number between 1 and 100
    //  printf("The number is %d\n", number);
    // Keep running the lop untill the number is gussed
    do
    {
        printf("Guess the number between 1 to 100\n");
        scanf("%d", &guess);
        
        if (number<guess)
        {
            printf("Smaller numnber please\n");
        }
        
        else if (guess<number)
        {
           printf("Larger number please\n");
        }
      
        else
        {printf("____________________________________________________________________________________\n");

         printf("                 ********  YOU GUESSED IT IN %d ATTEMPTS  ********                 \n", nguesses);

         printf("_____________________________________________________________________________________");

        }
          nguesses++;
        
    } while (guess!=number);
    
    return 0;
}