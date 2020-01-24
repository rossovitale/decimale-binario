#include <stdio.h>

void converti(int valin, int base){
    if(valin < base ){
        printf("%i", valin);    /* è una cifra */
    }
    else{ 
        converti(valin/base,base);
        printf("%i",valin%base);
    }
}
        
int main()
{
    converti(185,2);
}

