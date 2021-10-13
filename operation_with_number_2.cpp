#include "middle.h"


int itc_min_num(long long number){//6
    int min_n = 9;
    if (number < 0){
        number = number * -1;
    }
    if (number > 0){
    while (number > 0){
        if (number % 10 < min_n){
            min_n = number % 10;
        }
        number = number / 10;
    }
    return min_n;
    }
    return 0;
}

int itc_rev_num(long long number){//7
    long long n = 0;
    if (number == 0){
     return 1;
    }
    if (number < 0){
        number = number * -1;
    }
    while(number > 0){
        n = 10*n + number%10;
        number = number / 10;
    }
return itc_len_num(n);
}

int itc_null_count(long long number){//8
    int i = 0;
    if (number < 0){
    number = number * -1;
    }
    while (number >= 0){
        if (number % 10 == 0){
        i = i + 1;
        }
    number = number / 10;
    }
    return i;

}

int itc_second_max_num(long long number){//11
int max_n, max_n_2, i, number_1;
i = 0;
if (number < 0){
    number = number * -1;}
max_n = itc_max_num(number);
number_1 = number;
max_n_2 = max_n - 1;
while (number_1 > 0){
    if (max_n == number_1 % 10){
        i++;}
    number_1 = number_1 / 10;}
number_1 = number;
if (i > 1){
    return max_n;}
while (max_n_2 >= 0){
    while (number_1 > 0){
        if (max_n_2 == (number_1 % 10)){
            return max_n_2;}
        number_1 = number_1 / 10;}
    number_1 = number;
    max_n_2--;}
return -1;}

int itc_second_simple_max_num(long long number){//12
int max_n, max_n_2, i, number_1;
i = 0;
if (number < 0){
    number = number * -1;}
max_n = itc_max_num(number);
number_1 = number;
max_n_2 = max_n - 1;
while (number_1 > 0){
    if (max_n == number_1 % 10){
        i++;}
    number_1 = number_1 / 10;}
number_1 = number;
if (i > 1){
    return -1;}
while (max_n_2 >= 0){
    while (number_1 > 0){
        if (max_n_2 == (number_1 % 10)){
            return max_n_2;}
        number_1 = number_1 / 10;}
    number_1 = number;
    max_n_2--;}
return -1;}
