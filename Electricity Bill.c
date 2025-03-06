#include<stdio.h>
void main()
{
float bill, surcharge;
int units, amount;
char name[50];
printf("Enter the name of customer:");
scanf("%s",&name);
printf("Enter the number of units consumed:");
scanf("%d",&units);
if(units<=100)
{
    amount=100+(units*5);
}
else if(units>100 && units<=300)
{
    amount=100+(100*5)+((units-100)*7);
}
else
{
    amount=100+(100*5)+(200*7)+((units-300)*10);
}
if(amount>1000)
{
    bill=amount+(amount*0.05);
    surcharge=amount*0.05;
}
else{
    bill=amount;
}
printf("Customer details:\nName:%s\nTotal Units Consumed:%d\nBill Amount:%.2lf\nSurcharge Amount:%.2lf",name,units,bill,surcharge);
}

