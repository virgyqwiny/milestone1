/*
users-view user,add new user,edit,delete,login,change password
catalogue
issuance
serial
acquisition


Navigation
*/

#include<stdio.h>
#include<stdlib.h>
#include<
int menu();//prototype
int main()
{
    int action;
    action = menu();


return 0;
}
int menu()//header
{
    //body
    int action;
do {

    printf("\tcounty library\n");
    printf("welcome Mr.Kimani.\n");
    printf("what would you like to do?\n");
    printf("1.View Users.\n");
    printf("2.Add New User.\n");
    printf("3.Edit User.\n");
    printf("4.Delete User.\n");
    printf("5.Change Password.\n);
    printf("6.logout.\n");
    printf("7.Exit.n);
    printf("selected action(1-7):");
    scanf("%d",&action);
    if(action<1 || action>7){
            system("cls");
        printf("Invalid Action.Try again");

    }
}while(action<1|| action>7);

}












