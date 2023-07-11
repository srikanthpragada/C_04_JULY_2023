// Program to calculate net price
// Date : 11-JUL-2023

#include <stdio.h>

void main()
{
 int price, discount, net_price;

      printf("Enter price :");
      scanf("%d", &price);

      if(price > 5000)
         discount = price * 20 / 100;
      else
        if (price > 3000)
           discount = price * 15 / 100;
        else
           discount = price * 10 / 100;


      net_price = price - discount;

      printf("Price        %8d\n", price);
      printf("- Discount   %8d\n", discount);
      printf("Net Price    %8d\n", net_price);
}
