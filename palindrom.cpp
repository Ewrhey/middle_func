#include "middle.h"
bool itc_mirror_num(long long number){//9
    long long n = 0;
    long long number1 = number;
    if (number == 0){
	return true;
    }
    if (number % 10 > 0){
    while(number > 0){
        n = 10*n + number%10;
        number = number / 10;
    }
    return n == number1;
    }
 return false;
}


int itc_mirror_count(long long number){//10
    int i, counter;
    counter = 0;
    for (i = 1; i <= number; i++){
        if(itc_mirror_num(i)){
            counter++;
        }
}
return counter;
}
