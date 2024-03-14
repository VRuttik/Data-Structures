// Program of Roman To Integer.

#include<stdio.h>
#include<string.h>

int getValue(char symbol){
    if (symbol == 'I' || symbol == 'i')
        return 1;
    if (symbol == 'V' || symbol == 'v')
        return 5;
    if(symbol == 'X' || symbol == 'x')
        return 10;
    if(symbol == 'L' || symbol == 'l')
        return 50;
    if(symbol == 'C' || symbol == 'c')
        return 100;
    if(symbol == 'D' || symbol == 'd')
        return 500;
    if(symbol == 'M' || symbol == 'm')
        return 1000;
    return -1;
}

int romanToInteger(char* Roman, int size){
    int resultInt = 0;

    for(int i=0;i<size;i++){
        int val = getValue(Roman[i]);

        if(i<size-1){
            int valNext = getValue(Roman[i+1]);
            if(val>=valNext)
               resultInt += val;
            else{
                int afterSub = valNext - val;
                resultInt += afterSub;
                i++;
            }
        }else{
            resultInt += val;
        }
    }
    return resultInt;
}

int main(){

    char romanNumber[20]; 
    printf("\n Enter a Roman number (up to 3999): ");
    scanf("%s", romanNumber);

    int size = strlen(romanNumber);
    int result = romanToInteger(romanNumber, size);

    printf("The equivalent integer value is: %d\n", result);

    return 0;
}