#include<conio.h>
#include<stdio.h>
struct student
{
char name[20];
int roll_no;
float fees;
};
void main ()
{
struct student s1;
clrscr();
printf("Enter the student's name, roll number and fees paid:\n");
gets(s1.name);
scanf("%d %f",&s1.roll_no,&s1.fees);
printf("The student details are as follows:\nName:%s\nRoll
number:%d\nFees:%f\n",s1.name,s1.roll_no,s1.fees);
getch();
}
