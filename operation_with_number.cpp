#include "middle.h"

void itc_num_print(int number){//1
cout << number;
}

int itc_len_num(long long number){//2
    int i = 0;
    while (number != 0){
        i = i + 1;
        number = number / 10;
    }
    return i;
}

int itc_sum_num(long long number){//3
    int i = 0;
    while (number != 0){
        i = i + number % 10;
        number = number / 10;
    }
    if (i >= 0)
    return i;
    else
    return i*-1;
}

long long itc_multi_num(long long number){//4
    int i = 1;
    while (number != 0){
        i = i * (number % 10);
        number = number / 10;
    }
    if (i >= 0)
    return i;
    else
    return i*-1;
}

int itc_max_num(long long number){//5
    int max_n = 0;
    while (number != 0){

        if (number % 10 > max_n){
            max_n = number % 10;
        }
        else if ((number % 10) * -1 > max_n){
            max_n = (number % 10)*-1;
        }
        number = number / 10;
    }
    return max_n;
}

