#include<stdio.h>
int main()
{
	union car
{
  char name[50];
  int price;
};
/* The above code defines a derived type union car.

When a union is defined, it creates a user-defined type. However, no memory is allocated. To allocate memory for a given union type and work with it, we need to create variables.

Here's how we create union variables:

union car
{
  char name[50];
  int price;
};

int main()
{
  union car car1, car2, *car3;
  return 0;
}
Another way of creating union variables is:

union car
{
  char name[50];
  int price;
} car1, car2, *car3;

In both cases, union variables car1, car2, and a union pointer car3 of union car type are created.

How to access members of a union?
We use . to access normal variables of a union. To access pointer variables, we use -> operator.

In the above example,

price for car1 can be accessed using car1.price
price for car3 can be accessed using car3->price


Difference between unions and structures


Let's take an example to demonstrate the difference between unions and structures:

#include <stdio.h>
union unionJob
{
   char name[32];
   float salary;
   int workerNo;
} uJob;

struct structJob
{
   char name[32];
   float salary;
   int workerNo;
} sJob;

int main()
{
   printf("size of union = %d bytes", sizeof(uJob));
   printf("\nsize of structure = %d bytes", sizeof(sJob));
   return 0;
}
Output

size of union = 32
size of structure = 40
Why this difference in size of union and structure variables?

The size of structure variable is 40 bytes. It's because:

size of name[32] is 32 bytes
size of salary is 4 bytes
size of workerNo is 4 bytes
However, the size of union variable is 32 bytes. It's because the size of union variable will always be the size of its largest element. In the above example, the size of largest element (name[32]) is 32 byes.

Only one union member can be accessed at a time
You can access all members of a structure at once as sufficient memory is allocated for all members. However, it's not the case in unions. Let's see an example:

#include <stdio.h>
union Job
{
   float salary;
   int workerNo;
} j;

int main()
{
   j.salary = 12.3;
   j.workerNo = 100;

   printf("Salary = %.1f\n", j.salary);
   printf("Number of workers = %d", j.workerNo);
   return 0;
}
When you run the program, the output will be:

Salary = 0.0
Number of workers = 100
Notice that, we couldn't store 12.3 in j.salary.
}  */
}
