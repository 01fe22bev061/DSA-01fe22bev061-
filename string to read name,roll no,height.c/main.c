#include <stdio.h>
#include <stdlib.h>

struct student
{
    char sname[20];
    int rno;
    float ht;
};
main()
{
struct student s;
printf("enter the student details\n");
printf("enter name of the student\n");
gets(s.sname);
printf("enter the roll no\n");
scanf("%d",&s.rno);
printf("enter the height\n");
scanf("%f",&s.ht);
printf("the student details are\n");
printf("student name=%s rollno=%d height=%f\n", s.sname,s.rno,s.ht);
}
