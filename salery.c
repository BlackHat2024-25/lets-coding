#include <stdio.h>

int main()
{

    int salary;
    float all_fund, hr, pf, da, recieve_salary;
    int count = 1;
    while (count <= 5)
    {

        printf("enter monthly salary :");
        scanf("%d", &salary);

        if (salary != 0)
        {
           
            if (salary < 0)
            {
            
                printf("salary cannot be negative\n");
                break;
            }
            else if(salary <= 1000){
                printf("pf and da cannot cut from under 1000 salary");
                break;
            }
           
            
            else if (salary <= 10000)
            {
                pf = salary * 10 / 100;
                hr = salary * 5 / 100;
            }
            else if (salary <= 20000)
            {
                pf = salary * 10 / 100;
                hr = salary * 9 / 100;
            }
            else if (salary > 20000)
            {

                pf = salary * 10 / 100;
                da = salary * 5 / 100;
                hr = salary * 5 / 100;
            }
            
            all_fund = hr + pf + da;
            printf("all salary extra fund is : %.2f\n", all_fund);
            recieve_salary = salary - all_fund;

            printf("the total salary recieve after cut pf & da is : %.2f\n", recieve_salary);
            printf("\n");
        }
        else
        {
            printf("salary cannot be zero\n thanks for visit\n");
        }

        count += 1;
    }

    return 0;
}