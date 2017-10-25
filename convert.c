#include <stdio.h>
#include <string.h>
#include <math.h>

int main(int argc, char *argv[]){

    
    int n = atoi(argv[1]);

    int dec=0,x;
    
    for (int i=2; i<=n; i++)
    {
        
        int bin = atoi(argv[i]);
    
        if (bin == 1) {
            x= pow(2,n-i);
        }
        else
        {
            x=0;
        }
        dec = dec +x;
    }
    
    printf("The decimal value is: %d\n",dec);
    

    return 0;
}
