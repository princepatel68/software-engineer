// Q.1 Declare variables for a Flipkart product: productName (as a string), price (float), and rating (double). Assign sample values and print each variable with its data type.

#include <stdio.h>

int main()
{
    char productName[100] = "Smartphone";
    float price = 19999.99;
    double rating = 4.5;

    printf("Product Name: %s\n", productName);
    printf("Price: %.2f\n", price);
    printf("Rating: %.1f\n", rating);

    return 0;
}