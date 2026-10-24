//includes
#include <stddef.h>
#include <stdbool.h>
#include <math.h>
#include <time.h>
#include <string.h>
#include <stdio.h>
//set constanses
const unsigned short maxLength = 99ul;
//
class Car
{
private:
//set price of car
    size_t firstPrice;
    char* name=(char*)malloc(sizeof(char)*maxLength);
    private:
    /// @brief that return price reduce of car by year
    double reduce(){return 10;}
    //
public:
    /// @brief that constracture of car on Al
    /// @param price that first price of  car by Dzd
    Car(const char* name ,size_t price)
    {
        //set name
        strcat(this->name,name);
        //set price
        firstPrice = price;
    }
    /// @brief that function return 
    /// @param years that function return price while reduced
    size_t getPriceonUsed(size_t years)
    {
        return (((0.8)*firstPrice)*pow((0.9),years));
    }
    /// @brief that function return price while not used
    size_t getNewPrice(){return firstPrice;}
    ///
    size_t* setArrPrice(size_t years)
    {
        //fix years
        years++;
        //set returning  var
        size_t* returning =  (size_t*)malloc(sizeof(size_t)*years);
        //set len returning var
        size_t lenReturning  = 0;
        //set price on new year
        returning[0] = getNewPrice();
        //forloop
        for (size_t year = 1; year <years ; year++) returning[lenReturning++]= getPriceonUsed(year);        
        //return 
        return returning;
    }
    /// @brief that return name of car
    const char* getName(){return name;}
    //free
    void closeName(){free(name);}
};
//