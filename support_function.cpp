#include "middle.h"
int len_sistems(long long number, int sistem){
int i = 0;
while (number > 0){
    i++;
    number = number /sistem;
}
return i;
}

int sup_pow(int number, int degree){
int number_itog = number;
int i = 1;
if (degree > 0){
while (i < degree){
        number_itog = number_itog * number;
        i++;
}
return number_itog;
}
else {
    return 1;
}
}
