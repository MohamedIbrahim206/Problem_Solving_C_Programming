
/**
************************************************************************************
@file              : main.c
@author            : Mohamed Ibrahim Mohamed
@date              : 27Jun 2023
@brief             : solving problem number 33 level A in codeforces
************************************************************************************
 */
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int colors[4];
    for(int i=0;i<4;i++){
        scanf("%d",&colors[i]);

    }
    int result=0;
    for(int i=0;i<3;i++){
        for(int j=i+1;j<4;j++){
        if(colors[i]==colors[j]){
            result++;
            break;
        }

    }

    }
    printf("%d",result);

    return 0;
}
/**
*************************************************************************************
User                 Date             Brief
*************************************************************************************
Mohamed Ibrahim      27Jun 2023       solving problem number 33 level A in codeforces
*/
