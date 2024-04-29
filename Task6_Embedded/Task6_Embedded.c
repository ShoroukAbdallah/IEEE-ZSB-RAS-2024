#include <stdio.h>
#include <stdlib.h>
//------------------------------------------Assignment_1----------------------------------------
//----------------------------------------Problem_1----------------------------------------


int main()
{
    int *ptr;
    int *ptr1;
    int *ptr2;
    int *ptr3;
    int n;

    printf("enter the number of elements: ");
    scanf("%d",&n);

    ptr=(int*)malloc(n*sizeof(int));
    ptr1=(int*)calloc(n,sizeof(int));
    if(ptr==NULL)
    {
        printf("memory cannot allocated");
    }
    else
    {
        printf("\nmemory allocated using malloc ptr: ");
        for (int i=0; i<n ; i++)
        {
            ptr[i]=i;       ////initialization of malloc() method is address
            printf("%d ",ptr[i]);
        }
    }
    if(ptr1==NULL)
    {
        printf("memory cannot allocated for ptr1 ");
    }
    else
    {
        printf("\nmemory allocated using calloc ptr1: ");
        for (int i=0; i<n ; i++)
        {
            ptr1[i]=i;      //initialization of calloc() method is 0
            printf("%d ",ptr1[i]);
        }
    }
    ptr2=(int*)realloc(ptr1,2*n);   //change the size of ptr1
    if(ptr2==NULL)
    {
        printf("memory cannot allocated for ptr2 ");
    }
    else
    {
        printf("\nbefor doubling the size of ptr1 to ptr2: ");
        for (int i=0; i<2*n ; i++)
        {
            ptr2[i]=i;
            printf("%d ",ptr2[i]);
        }
    }
    ptr3=(int*)malloc(4*n*sizeof(int));
    if(ptr3==NULL)
    {
        printf("memory cannot allocated for ptr3 ");
    }
    else
    {
        printf("\nmemory allocated using malloc ptr3: ");
        for (int i=0; i<4*n ; i++)
        {
            ptr3[i]=i;
            printf("%d ",ptr3[i]);
        }
     }


        free(ptr);
        free(ptr1);
        free(ptr2);
        free(ptr3);

    return 0;
}




//----------------------------------------Problem_2----------------------------------------
#include <string.h>
int main()
{
    char name [50];
    int len;
    int count=0;
    int i;

    printf("enter the maximum length: ");
    scanf("%d",&len);
    printf("enter the name: ");
    scanf("%s",&name);

    for ( i=0; name[i]!='\0'; i++)
    {
        int count_ch=0;
        for(int j=0 ;name[j]!='\0' ;j++)
        {
            if (name[i]==name[j])
            {
                count_ch++;

            }
        }
        if(count_ch>count)
        {
            count=count_ch;
        }
    }

            printf("the name is %s\n",name);
            printf("thr freq of the most repeted character is %d times\n",count);

     return 0;
}







//------------------------------------------Assignment_2----------------------------------------
//----------------------------------------Problem_1----------------------------------------
struct times{
    int hour;
    int min;
    int sec;
};

int main()
{
    struct times time;
    while(1)
          {

            printf("enter the time [hh:mm:ss]: ");
            scanf("%d:%d:%d",&time.hour,&time.min,&time.sec);
            if(0<=time.hour && time.hour<=23 && 0<=time.min && time.min<=59 && 0<=time.sec&& time.sec<=59)
            {
                printf("time is %d:%d:%d\n",time.hour,time.min,time.sec);

            }

            else
            {
                printf("invalid input\n");
                break;
            }
          }

    return 0;
}




//----------------------------------------Problem_2----------------------------------------
 #include <string.h>

 int main()
 {
     char string[50];
     // char string_ch[50];
     int visited[256] = {0};

     printf("enter string: ");
     gets(string);
     for (int i = 0; i < strlen(string) - 1; i++)
     {
         for (int j = i + 1; j < strlen(string); j++)
         {
             if (string[i] == string[j] && !visited[string[i]])
             {
                 visited[string[i]] = 1;
                 break;
             }
         }

         if (!visited[string[i]])
         {
             printf("%c\n", string[i]);
         }
     }
     if (!visited[string[strlen(string)-1]]){
         printf("%c", string[strlen(string)-1]);
     }
     // printf("unique %s",str_check);
     return 0;
 }






//------------------------------------------Assignment_3----------------------------------------
//----------------------------------------Problem_1----------------------------------------
#define macro_sizeof(type)   sizeof(type)
#include <stddef.h>
static inline size_t inline_sizeof(const int type)
{
    return sizeof(type);
}

int main()
{
    int x=50;
    printf("size using sizeof(): %d bytes\n",sizeof(x));
    printf("size using inline: %d bytes\n",inline_sizeof(x));
    printf("size using macro: %d bytes\n",macro_sizeof(x));

    return 0;

}






//----------------------------------------Problem_2----------------------------------------

struct node{
  int data;
  struct node *link;
};
struct node *head=NULL;



void add_data(int data){
      struct node *node_1=(struct node *)malloc(sizeof(struct node));
      node_1->data=data;
      node_1->link=head;
      head=node_1;
}

void delete_data(){
    if(head==NULL)
        {
        printf("Linklist is empty\n");
        return;
        }
        struct node *temp=head;
        head=head->link;
        free(temp);
}

void Print_data(){
    if(head==NULL)
        {
        printf("linklist is empty\n");
        return;
        }
      struct node *temp=head;
      while(temp!=NULL)
      {
          printf("%d",temp->data);
          temp=temp->link;
      }
      printf("\n");
}





int main(){
  while (1)
    {
        char choice;
        printf("'+' to add\n'-' to delete\n'p' to print\n'x' to Exit\n ");
        printf("enter your choice: ");
        scanf(" %c", &choice);

        switch (choice)
        {
        case '+':
           printf("Enter data to add: ");
           int add;
           scanf("%d", &add);
           add_data(add);
           break;

        case '-':
           printf("Enter data to delete: ");
           int _delete;
           scanf("%d", &_delete);
           delete_data();
           break;

        case 'p':
           Print_data();
           break;

        case 'x':
           printf("Exit");
           exit(1);
           break;

        default:
           printf("Invalid input\n");

        }
    }
  return 0;
}


