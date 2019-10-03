#include<conio.h>
#include<stdio.h>
struct employ
{
    int sno, emp_id;
    char name[20];
    long salary;
    int age;
}emp[10];
int main()
{
    int i;
    printf("Enter information of employ ");
    for(i=1;i<=2;i++)
    {
        emp[i].sno=i;
        printf("for serial number %d \n",i);
        printf("Enter employ id: ");
        scanf("%d",&emp[i].emp_id);
        printf("Enter name: ");
        scanf("%s",&emp[i].name);
        printf("Enter salary: ");
        scanf("%ld",&emp[i].salary);
        printf("Enter age: ");
        scanf("%d",&emp[i].age);
        printf("\n");
    }
    for(i=1;i<=2;i++)
    {
        printf("Employ number %d \n",emp[i].sno);
        printf("Id %d \n",emp[i].emp_id);
        printf("Name %s \n",emp[i].name);
        printf("Salary %ld \n",emp[i].salary);
        printf("Age %d \n",emp[i].age);
        printf("\n");
    }
    return 0;
}
