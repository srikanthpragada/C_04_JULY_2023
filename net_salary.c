// Program to print net salary
// Date : 10-JUL-2023

#include <stdio.h>

void main()
{
 int salary, hra, da, pf, net_salary;

      printf("Enter salary :");
      scanf("%d", &salary);

      hra = salary * 30 / 100;
      da = salary * 15 / 100;
      pf = salary * 3 / 100;

      net_salary = salary + hra + da - pf;

      printf("Salary       %8d\n",salary);
      printf("+ HRA        %8d\n",hra);
      printf("+ DA         %8d\n",da);
      printf("- PF         %8d\n",pf);
      printf("Net Salary   %8d\n",net_salary);
}
