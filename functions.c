#include <stdio.h>
#include "helpers.h"
#include "encode.h"
#include <stdbool.h>

float calculate_tax(float price, float tax_rate);

int main(int argc, char *argv[])
{

    printf("the number of arguments was %d\n", argc);

    for(int i =0; i < argc; i++){

    printf("Argument #%d was  %s\n", i+1, argv[i]);
}

float user_tax_rate = get_float("what is the tax rate in your area?");

float user_price = get_float("what is the price of the item you want the tax calculated on?");

float item_tax = calculate_tax(user_price, user_tax_rate);

printf("the tax on this item would be $%f\n", item_tax);

ceasar_shift("test", true, 4);

    return 0;
}

float calculate_tax(float price, float tax_rate);{

    float tax = price * tax_rate;

    return tax;
    
}