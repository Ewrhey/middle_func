#include"middle.h"
long long itc_covert_num(long long number, int ss){//17
long long n = 0;
int sup = len_sistems(number, ss);
long long itog = 1;
while (sup > 0){
    itog = itog * 10;
    sup--;
}
int i = 1;
while(number > 0){
        n = 10*n + number%ss;
        number = number / ss;
}
number = itog + n;
itog = 0;
while(number > 0){
        itog = 10*itog + number%10;
        number = number / 10;
}
return itog/10;

}

long long itc_rev_covert_num(long long number, int ss){//18
long long itog = 0;
int raz = itc_len_num(number) - 1;
int i = 0;
while (number > 0){
    itog = itog + (number%10 * sup_pow(ss, i));
    number = number / 10;
    i++;
}
return itog;
}
