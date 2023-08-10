#include <stdio.h>
#include <cs50.h>

bool prime(int number){
    if (number <= 1){

        return false;
    }
    for (int j = 2; j * j <= number; j++){
        if (number % j == 0){
            return false;

        }
    }
    return true;
}

int main(void){
  int min = get_int("Minimum: ");
  int max = get_int("Maximum: ");

  for (int i = min; i <= max; i++){
    if (prime(i)){
        printf("%i\n", i);
    }
  }


}

