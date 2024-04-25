#include <stdio.h>
//-------------------------------------Assignment_1---------------------------------------
//-----------------------------problem_1-------------------------------------------
typedef struct student {
    int roll : 4;
    int age : 8;
    int mark : 3;
    char address[20];
    char name[50];
};


int main() {
    struct student students[15];
    int roll, age, mark;

    for (int i = 0;i < 15;i++)
    {
        printf("Student %d:\n", (i + 1));
        printf("Enter Name: ");
        scanf("%s", &students[i].name);

        printf("Enter Roll Number: ");
        scanf("%u", &roll);
        students[i].roll = roll;

        printf("Enter Age: ");
        scanf("%u", &age);
        students[i].age = age;

        printf("Enter Mark: ");
        scanf("%u", &mark);
        students[i].mark = mark;

        printf("Enter Address: ");
        scanf("%s", &students[i].address);
        printf("\n");
    }


    for (int i = 0; i < 15; i++) {
        printf("\nStudent %d:\n", i + 1);
        student_info(students[i]);
    }

    printf("The size of struct student_info: %d\n", sizeof(struct student));
    return 0;
}

void student_info(struct student students) {
    printf("\nThe Roll num: %d\n", students.roll);
    printf("The Age: %d\n", students.age);
    printf("The Mark of student: %d\n", students.mark);
    printf("The Information of Student: \n");
    printf("The Address of student: %s\n", students.address);
    printf("The Name of Student: %s\n", students.name);
    printf("\n");
}



//-----------------------------problem_2-------------------------------------------

typedef struct complex {
    float real;
    float img;
};

struct complex Add_complex(struct complex num1, struct complex num2) {
    struct complex sum;
    sum.real = num1.real + num2.real;
    sum.img = num1.img + num2.img;
    return sum;
}


int main() {
    struct complex num1, num2, result;

    printf("Enter the first num_complex (real and img): ");
    scanf("%f+%fi", &num1.real, &num1.img);
    printf("\nEnter the second num_complex (real and imgi): ");
    scanf("%f+%fi", &num2.real, &num2.img);

    result = Add_complex(num1, num2);
    printf("\nthe result of add two numbers= %.2f+%.2fi\n\n", result.real, result.img);

    return 0;
}



//-----------------------------problem_3-------------------------------------------
typedef int Int;
typedef long Long;
typedef float Float;
typedef double Double;
typedef char Char;
typedef _Bool boolean;

int main() {
    Int a = 6;
    printf("size of integer: %lu\n", sizeof(a));
    Long b = 1976245;
    printf("Size of Long: %lu\n", sizeof(b));
    Float c = 19.5;
    printf("Size of Float: %lu\n", sizeof(c));
    Double d = 1.249;
    printf("Size of double: %lu\n", sizeof(d));
    Char e = 'S';
    printf("Size of character: %lu\n", sizeof(e));
    boolean check = 1;
    printf("Size of boolean: %lu\n", sizeof(check));
    return 0;
}




//-------------------------------------Assignment_2---------------------------------------
enum operations {
    add = '+',
    sub = '-',
    mult = '*',
    _div = '/',
    and= '&',
    or = '|',
    not= '!',
};

int main()
{
    float num1, num2;
    char operation;
    float result;

    //printf("the size of enum= %d",sizeof(enum operations));


    while (1)
    {
        printf("\n");
        printf("Simple Calculator\n");
        printf("Enter the first number: ");
        scanf("%f", &num1);
        printf("Enter the second number: ");
        scanf("%f", &num2);
        printf("Enter the operation(+,-,*,/,&,|,!): ");
        scanf(" %c", &operation);


        switch (operation)
        {
        case add:
            result = num1 + num2;
            break;

        case sub:
            result = num1 - num2;
            break;

        case mult:
            result = num1 * num2;
            break;

        case _div:
            if (num2 == 0)
            {
                printf("Erorr division by zero");
            }
            else { result = num1 / num2; }
            break;

        case and :
            result = (int)num1 & (int)num2;
            break;

        case or :
            result = (int)num1 | (int)num2;
            break;

        case not:
            result = !(int)num1;
            break;

        default:
            printf("Error in operation");
            break;

        }
        printf("the result= %.2f\n", result);
    }



    return 0;
}





//-------------------------------------Assignment_3---------------------------------------
//-----------------------------problem_1-------------------------------------------
#define sort_Ascending
#define sort_Descending

void sort_Ascending(int arr[], int size) {
    int temp;
    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] > arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}
void sort_Descending(int arr[], int size) {
    int temp;
    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] < arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}


int main()
{
    int size;
    int arr[size];

    printf("Enter the size of arr: ");
    scanf("%d", &size);
    printf("Enter the elements of arr: ");
    for (int i = 0; i < size;i++)
    {
        scanf("%d", &arr);
    }

#ifdef sort_Ascending
    sort_Ascending(arr, size);
    printf("sort_Ascending: ");
    for (i = 0; i < size;i++)
    {
        printf("%d ", arr[i]);
    }
#endif // sort_Ascending

#ifdef sort_Descending
    sort_Ascending(arr, size);
    printf("sort_Descending: ");
    for (i = 0; i < size;i++)
    {
        printf("%d ", arr[i]);
    }
#endif // sort_Descending

    return 0;
}





//-----------------------------problem_2-------------------------------------------

#define add(num1, num2) num1 + num2
#define sub(num1, num2) num1 - num2


int main() {
    int num1, num2, result;
    char operation;

    printf("Enter The first number: ");
    scanf("%d", &num1);
    printf("Enter The second number: ");
    scanf("%d", &num2);
    printf("Enter The operation(+ , -): ");
    scanf(" %c", &operation);

    switch (operation)
    {
    case'+':
        result = add(num1, num2);
        printf("The Result= %.3f", result);
        break;

    case'-':
        result = sub(num1, num2);
        printf("The Result= %.3f", result);
        break;

    default:
        printf("Erorr in operation ");
        break;
    }
    return 0;
}