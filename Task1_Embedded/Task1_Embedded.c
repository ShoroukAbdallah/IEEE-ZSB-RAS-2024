#include <stdio.h>

#include <stdlib.h>
//################################## Assignment_1 #######################
//          problem_1

/*
int main()
{
 int size;
 int count=0;
 printf("enter the size of array ");
 scanf(" %d",&size);
 int arr[size];
 printf("enter elements of array ");
 for(int i=0; i<size ;i++)
    {
        scanf(" %d",&arr[i]);
    }
 for (int i=0; i<size-1 ;i++)
    {
        for (int j=i+1; j<size ;j++)
            {
                if(arr[i]==arr[j]){
                    count++;
                    break;
                }
            }
    }
 printf("total number of duplicate elements in array = %d",count);
 return 0;
}
*/

//##########################################################################
//          problem_2
/*
int main(){
 int size;
 printf("enter the size of array ");
 scanf(" %d",&size);
 int arr[size];
 int check[100]={0};

 printf("enter elements of array ");
 for(int i=0; i<size ;i++)
    {
        scanf(" %d",&arr[i]);
    }

 for (int i=0; i<size-1 ;i++)
    {
        int count=0;
        for (int j=i+1; j<size ;j++)
            {
                if (arr[i]==arr[j]){
                    count++;
                    check[arr[i]]=1;
                    break;
                }
            }
       if(count==0&&check[arr[i]]==0){
        printf("unique number = %d",arr[i]);
       }
    }
 if(check[arr[size-1]]=0)
    {
    printf("unique number = %d",arr[size-1]); // last element
    }
return 0;
}
*/

//##########################################################################
//          problem_3

//void freq(int arr[], int size)
//{
//    int check[100]= {0};
//
//    for (int i = 0; i < size-1 ; i++)
//    {
//        if (check[arr[i]]==0)
//        {
//            int count=1;
//            for (int j=i+1 ; j < size; j++)
//            {
//                if(arr[i]==arr[j])
//                {
//                    count++;
//                    check[arr[i]]==1;
//                }
//            }
//            printf("element %d appears %d times \n",arr[i],count);
//        }
//    }
//}
//int main()
//{
//    int size;
//    printf("enter the size of array ");
//    scanf(" %d",&size);
//    int arr[size];
//    printf("enter elements of array ");
//    for(int i=0; i<size ; i++)
//    {
//        scanf(" %d",&arr[i]);
//    }
//    freq(arr,size);
//    return 0;
//}



//##########################################################################
//          problem_4
/*
int add(int*x,int*y,int*s){
    int sum;
    *s=*x+*y;
}
int main(){
    int x,y;
    int s=0;
    printf("Enter the first  number ");
    scanf("%d",&x);
    printf("Enter the second number ");
    scanf("%d",&y);
    add(&x,&y,&s);
    printf("The sum of two numbers is %d",s);

    return 0;
 }
*/


//-----------------------------------------------------------------------------------------------------------------



//################################# Assignment_2 #######################

//int main() {
//    int x = 10, y = 20, z = 30;
//    int *p, *q, *r;
//    p = &x;
//    q = &y;
//    r = &z;
//    printf("x= %d\n", x);
//    printf("y= %d\n", y);
//    printf("z= %d\n", z);
//    printf("p= %p\n", p);
//    printf("q= %p\n", q);
//    printf("r= %p\n", r);
//    printf("*p= %d\n", *p);
//    printf("*q= %d\n", *q);
//    printf("*r= %d\n", *r);
//
//    int *temp = p;
//    p = q;
//    q = temp;
//    printf("after swapping");
//    printf("x= %d\n", x);
//    printf("y= %d\n", y);
//    printf("z= %d\n", z);
//    printf("p= %p\n", p);
//    printf("q= %p\n", q);
//    printf("r= %p\n", r);
//    printf("*p= %d\n", *p);
//    printf("*q= %d\n", *q);
//    printf("*r= %d\n", *r);
//
//    return 0;
//}




//----------------------------------------------------------------------------------------------------------------

//################################# Assignment_3 #######################
//            problem_1
/*
int main()
{
    char str[100];
    printf("Enter a string ");
    fgets(str, 100, stdin);
    printf("the string you input is %s", str);
    return 0;
}
*/

//################################# Assignment_3 #######################
//            problem_2
/*
int main() {
    char str[100];

    printf("Enter string ");
    fgets(str, 100, stdin);

    int i = 0;
    while (str[i] != '\0')
    {
        printf("%c ", str[i]);
        i++;
    }
    printf("\n");
    return 0;
}
*/



//################################# Assignment_3 #######################
//            problem_3
/*
int main() {
    char str1[100], str2[100];

    printf("Enter first string ");
    fgets(str1, 100, stdin);

    printf("Enter second string ");
    fgets(str2, 100, stdin);

    int i = 0;
    while (str1[i] != '\0' && str2[i] != '\0' && str1[i] == str2[i]) {
        i++;
    }

    if (str1[i] == '\0' && str2[i] == '\0') {
        printf("Strings are equal");
    } else {
        printf("Strings are not equal");
    }
    return 0;
}
*/

//################################# Assignment_3 #######################
//            problem_4

//int main()
//{
//    char str1[100] = {'\0'},str2[100] = {'\0'};
//    printf("Enter string ");
//    fgets(str1, 100, stdin);
//    for (int i=0; str1[i]!='\0'; i++)
//    {
//        str2[i]=str1[i];
//    }
//    printf("string_2 is %s\n", str2);
//
//
//    return 0;
//}
//
