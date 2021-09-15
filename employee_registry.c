#include <stdio.h>
//employee structure;
struct employees {
    char name[50];
    long id;
    int days;
    int hours;

};
main(){
    int i = 0;
    int salary;
    //structure array;
    struct employees sal[100];
    printf("Program to store and calculate emplouee salaries\n");
    printf("---------------------------------------------------\n");

    do{
    //employee details entry;
    printf("ENTER EMPLOYEE DETAILS\n");
    printf("NAME :\n");
    scanf("%s",sal[i].name);
    printf("ID :\n");
    scanf("%ld",&sal[i].id);
    printf("DAYS WORKED :\n");
    scanf("%d",&sal[i].days);
    printf("HOURS WORKED :\n");
    scanf("%d",&sal[i].hours);
    i++;
    }while(i < 3);
    i = 0;
    while(i < 3){
        printf("NAME :%s\n",sal[i].name);
        printf("ID :%ld\n",sal[i].id);
        printf("DAYS :%d\n",sal[i].days);
        printf("HOURS :%d\n",sal[i].hours);
        printf("SALARY :%d\n\n\n",(sal[i].hours)*(sal[i].days));
    i++;
    }
}
