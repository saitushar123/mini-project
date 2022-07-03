//Employee Management Mini Project C Language
#include<stdio.h>
#include<string.h>
struct empinfo
{
int mob;
float sal;
char empname[30];
char dept[30];
} e[100];
int m,i,j=0,x=0,res=0,tot;
void add();
void del();
int main()
{
    int a,i;
printf("\n");
printf("****Employee Management****\n");
printf("\n");
while(a!=3)
{ printf(" ***Choose*** \n\n");
printf("1)Add Information\n");
printf("2)Delete Information\n\n");
printf(" Choose any one =");
scanf("%d",&a);
if(a==1)
{
add();
}
else if(a==2)
{
del();
}
else
{
printf("\n\nInvalid Option. Try again");
}
printf("\n\n");
}
}
void add()
{
printf("\n\n");
printf("We have information of %d employees presently.\n",tot);printf("Number of entries you want to add ?\n");
scanf(" %d",&m);
res=m+tot;
for(i=tot,j=0; i<res; i++)
{
printf("\n");
printf("Enter Employee's Name = \n");
scanf("%s",e[i].empname);
printf("Enter Department = \n");
scanf("%s",e[i].dept);
printf("Enter the Mobile Number = \n");
scanf("%d",&e[i].mob);
printf("Enter Salary Amount = \n");
scanf("%.2f",&e[i].sal);
printf("\n");
j++;
x++;
tot++;
}
}
void del()
{
int b,c;
printf("Enter the Serial Number of Employee Information you want to delete = ");
scanf("%d",&b);
if(b<tot)
{
printf("What you wish to Delete ?\n");
printf("1)Remove Employee Name\n2)Remove Department\n3)Remove Mobile Number\n4)Remove Salary\nYour choice = ");
scanf("%d",&c);if(c==1||c==2||c==3||c==4)
{
printf("Deleted");
}
else printf("Your choice is not acceptable");
}
else
printf("\an\nInvalid Serial number\n");
}
