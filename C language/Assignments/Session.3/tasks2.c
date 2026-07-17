// Q2.Create a constant variable to store the GST rate (for example, 18%) and use it to calculate the final price of a Zomato order with a given base price.<br><br><em><strong>Constraint:</strong> The GST rate must not be changeable after its initial assignment.</em>
#include <stdio.h>

int main()
{

    const float GST_RATE = 18.0;

    float basePrice = 250.00;

    float gstAmount = (basePrice * GST_RATE) / 100;
    float finalPrice = basePrice + gstAmount;

    printf("--- Zomato Order Bill ---\n");
    printf("Base Price:  ₹%.2f\n", basePrice);
    printf("GST (%.2f%%): ₹%.2f\n", GST_RATE, gstAmount);
    printf("-------------------------\n");
    printf("Final Price: ₹%.2f\n", finalPrice);

    return 0;
}