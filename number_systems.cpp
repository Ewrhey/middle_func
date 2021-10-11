#include "middle.h"

long long itc_bin_num(long long number){//13
return itc_covert_num(number, 2);
}

long long itc_oct_num(long long number){//14
return itc_covert_num(number, 8);
}

long long itc_rev_bin_num(long long number){//15
return itc_rev_covert_num(number, 2);
}

long long itc_rev_oct_num(long long number){//16
return itc_rev_covert_num(number, 8);
}
