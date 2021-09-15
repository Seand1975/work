#include <stdio.h>
#include <string.h>
int i;
struct students{
    char name[50];
    int marks;
    long id;
};
main(){
    
    printf("Program to print student details\n");
    printf("-----------------------------------------------\n");
    struct students s[100];
    do{
    printf("Enter student name :\n");
    scanf("%20[^\n]",&s[i].name);    
    printf("Enter student marks :\n");
    scanf("%d",&s[i].marks);    
    printf("Enter student id :\n");
    scanf("%ld",&s[i].id);  
    i++;  
     } while(i < 3);
    int i = 0;
    while(i < 3){
    printf("STUDENT NAME : %s\n",s[i].name);    
    printf("MARKS :%d\n",s[i].marks);
    printf("ID :%ld\n",s[i].id);  
    i++;
    }

}