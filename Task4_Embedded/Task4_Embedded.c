#include <stdio.h>
#include <stdlib.h>

//----------------------------------------Assignment_1------------------------------------------
    struct student{
        char name[50];
        char address[50];
        int age;
        int roll_number;
        int mark;
    };

int function(struct student st[],int size)
{
    int count=0;
    for(int i=0; i<15; i++){
        if (st[i].mark<12){
          count++;
        }
    }
    printf("the number of student with mark less 12 is %d students",count);

}


int main()
{
    struct student st[15];
    for(int i=0 ;i<15 ;i++)
        {
            printf("\nEnter the student_%d information\n",i+1);
            printf("Enter the student name: ");
            scanf("%s",&st[i].name);
            printf("Enter the student address: ");
            scanf("%s",&st[i].address);
            printf("Enter the student age: ");
            scanf("%d",&st[i].age);
            printf("Enter the student roll_number: ");
            scanf("%d",&st[i].roll_number);
            printf("Enter the student mark: ");
            scanf("%d",&st[i].mark);
            printf("\n");
        }

     for(int i=0 ;i<15 ;i++)
        {
            printf("\nStudent_%d information\n",i+1);
            printf("student name: %s\n",st[i].name);
            printf("student address: %s\n",st[i].address);
            printf("student age: %d\n",st[i].age);
            printf("student roll_number: %d\n",st[i].roll_number);
            printf("student mark: %d\n",st[i].mark);

        }

     function(st,15);

    return 0;
}




//----------------------------------------Assignment_2------------------------------------------
//------------------------------------problem_1------------------------------------------


struct dates {
    int year;
    int month;
    int day;

};


int main()
{
    struct dates date_1;
    struct dates date_2;
    char data[50];

    printf("\nEnter the information of date_1 (day/month/year)\n");
    scanf("%s",&data);
    scanf(data,"%d%d%d",&date_1.day,&date_1.month,&date_1.year);

    printf("\nEnter the information of date_2 (day/month/year)\n");
    scanf("%s",&data);
    scanf(data,"%d%d%d",&date_2.day,&date_2.month,&date_2.year);

    if (date_1.day==date_2.day && date_1.month==date_2.month && date_1.year==date_2.year){
        printf("Dates are equal");
    }
    else{
        printf("Dates are not equal");

    }

     return 0;
}



//----------------------------------------Assignment_2------------------------------------------
//------------------------------------problem_2------------------------------------------

struct information{
    char name[50];
    int age;
};

int main()
{
    struct information *ptr;
    struct information info;

    printf("enter the information of person\n");
    printf("Enter the person name: ");
    scanf("%s",&info.name);
    printf("Enter the person age: ");
    scanf("%d",&info.age);

    ptr=&info;
    printf("the person name is %s\n",ptr->name);
    printf("the person age is %d",ptr->age);

return 0;
}




//----------------------------------------Assignment_3------------------------------------------


struct test_1{
    char name[50];
    int ide;
    char class_ide[20];

};

struct test_2{
    char name[50];
    char class_ide[20];
    int ide;
};

int main()
{
    struct test_1 test1;
    struct test_2 test2;

    printf("the size of struct tast_1 is %d",sizeof(test1));
    printf("\nthe size of struct tast_2 is %d",sizeof(test2));
// the size will not change by change the order of definition

return 0;
}

















