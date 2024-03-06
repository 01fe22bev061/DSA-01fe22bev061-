struct student
{
    char sname[20];
    int rno;
    float ht;
};

main()
{
    struct student s;
    struct student s1;
    printf("enter the  2 student details\n");
    printf("enter name and roll no and height of student 1\n");
    scanf("%s%d%f",&s.sname,&s.rno,&s.ht);

      printf("enter name and roll no and height of student 2\n");
    scanf("%s%d%f",&s1.sname,&s1.rno,&s1.ht);


   if(s.ht>s1.ht)
   {
       printf("the student details whose height is more are\n");

       printf("name=%s    rollno=%d    height=%f\n",s.sname,s.rno,s.ht);
   }

   else
   {
        printf("the student details whose height is more are\n");

       printf("name=%s    rollno=%d    height=%f\n",s1.sname,s1.rno,s1.ht);
   }


}
