#include "stdio.h"
#include "string.h"

struct project
{
char name[100],history[100],gender[100],college,room[100],status[100],pass[100],type[100],charge[100],age[100],date[100];
char referral[100];
int num[100],id[100];
}ob1;

void details_store()
{
printf("Enter Your Room id:");
scanf("%d",&ob1.id);
printf("Enter Your Name:");
scanf("%s",&ob1.name);
printf("Enter Your Contact no:");
scanf("%s",&ob1.num);
printf("Enter Your Pass Status:");
scanf("%s",&ob1.pass);
printf("Enter Your Age:");
scanf("%s",&ob1.age);
printf("Enter Your Medial history:");
scanf("%s",&ob1.history);
printf("Enter Your Pass expiry date:");
scanf("%s",&ob1.pass);
printf("Enter Your Gender:");
scanf("%s",&ob1.gender);
printf("Enter Your College name:");
scanf("%s",&ob1.college);
printf("Enter Your Room type(simple/deluxe):");
scanf("%s",&ob1.room);
printf("Enter Your Student status(new/existing):");
scanf("%s",&ob1.status);
printf("Enter Your Student Type(engineering/medical):");
scanf("%s",&ob1.type);
printf("Enter Your Referral Status(yes/no):");
scanf("%s",&ob1.referral);
}
void display()
{printf("Room_id");
printf("\tContact Number");
printf("\tStudent Name");
printf("\tPass Status");
printf("\tMedical History");
printf("\tCollege Name");
printf("\n");
printf("%d",ob1.id);
printf("\t%s",ob1.num);
printf("\t%s",ob1.name);
printf("\t%s",ob1.pass);
printf("\t%s",ob1.history);
printf("\t%s",ob1.college);
printf("\n");}
int main()
{static int charge = 500;char o[]="yes";char room_type[]="deluxe";int amt=10000;char a[]="yes",Student_Type[]="medical";
 char gender[]="female";char stu[]="new";
details_store();

display();

if(strcmp(ob1.status,stu)==0)
{amt=amt-500;

}

if(strcmp(ob1.type,Student_Type)==0)
{
amt=amt-(amt*10/100);
}



if(strcmp(ob1.gender,gender)==0)
{
amt=amt-(amt*10/100);
}



if(strcmp(ob1.referral,o)==0)
{
amt=amt-(amt*5/100);
}



if(strcmp(ob1.pass,a)==0)
{amt=amt-500;
}

if(strcmp(ob1.room,room_type)==0)
{
amt=amt+400;
}
printf("\nTotal Bill:%d",amt);
printf("Age:");
printf("Service Charge:");
printf("Gender:");
printf("Discount Offered:");
printf("Total Bill to be payed:");

printf("%s",ob1.age);
printf("%s",ob1.charge);
printf("%s",ob1.gender);

} 


