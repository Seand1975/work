#include <stdio.h>
#include <string.h>

struct students{
    char name[50];
    int marks;
    long id;
}
main(){
    int i,j;
    printf("Program to print student details\n");
    printf("-----------------------------------------------\n");
    struct students s[10];
    for(i = 0;i < 10;i++){
    printf("Enter student name marks and id :\n");
    scanf("%s %d %ld",&s[i].name,&s[i].marks,&s[i].id);    
    
    }
    for(j = 0;j < 10;j++){
    printf("%s %d %ld\n",s[j].name,s[j].marks,s[j].id);    
    
    }

}