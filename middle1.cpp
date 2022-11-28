#include <iostream>
#include "middle.h"

using namespace std;


int itc_min_num(long long number){
number = my_abs(number);
    int zifra,minimum;
    minimum = 9;
  if (number == 0){
    return 0;
  }else{

  }

    while (number > 0){
        zifra = number % 10;

        if(zifra < minimum){
            minimum = zifra;
        }

        number /= 10;

    }


return minimum;
}

int itc_rev_num(long long number){

    return -1;

}

int itc_null_count(long long number){
    number = my_abs(number);
    int zifra, nullCount;
    nullCount = 0;
    if (number == 0){
        return 1;

    }
    while(number > 0){
        zifra = number % 10;

        if (zifra == 0){
            nullCount = nullCount + 1;
        }

        number /= 10;
    }

    return nullCount;

}

bool itc_mirror_num(long long number){
int zifra,x,y,b;
    y = 0;
    b = number;
    if (b / 10 != 0 )
        {
            if (b > 0)
                {
                    while (b > 0)
                    {
                        zifra = b % 10;
                        y =  y*10  + zifra;
                        b = b / 10;
                    }

            if (number == y)
                return 1;
                    return 0;
                }
                else
                {
                    b = b * (-1);
                    while (b > 0)
                    {
                        zifra = b % 10;
                        y =  y*10  + zifra;
                        b = b / 10;
                    }

            if (number == y * (-1))
                return 1;
                    return 0;
                }
        }
    return -1;






}
