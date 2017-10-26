#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct car {                    //use typedef to create an alias for struct car i.e. Car

    char *model;
    int year;
    char *color;

}Car;                                   //Car = 'struct car'

void GetCarInfo(Car Car_1){             //function for printing out car info
    
    
    printf("\nCar Info is:\n");
    printf("Year: %d\n",Car_1.year);
    printf("Model: %s\n",Car_1.model);
    printf("Color: %s\n\n",Car_1.color);


}

int main(){

    
    Car a,b;                          //defines a variable of a specific car
    
    a.model ="Mustang";
    a.year =2006;
    a.color= "black";
   
    b.year = 2002;
    b.model = "Trailblazer";
    b.color = "White";
    
    
    //function that prints out the info of the car//
    GetCarInfo(a);
    GetCarInfo(b);



    return 0;
}
