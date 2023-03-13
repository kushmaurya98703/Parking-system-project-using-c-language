#include<stdio.h>


void riksha();
void car();
void bus();
void showresult();
void deletdata();
void exit();
int menu();

int ri=0,ca=0,bu=0,amount=0, count=0;


int main(){ 

while(1){
switch(menu()){
    case 1:
    riksha();
    break;

    case 2:
    car();
    break;

    case 3:
    bus();
    break;

    case 4:
    showresult();
    break;

    case 5:
    deletdata();
    break;
    
    case 6:
    exit(0);

    default:
    printf("Invalid choise\n");
}
}


}

int menu(){
    int n;
    printf("\n\n1: Riksha entry\n");
    printf("2: car entry\n");
    printf("3: bus entry \n");
    printf("4: show result\n");
    printf("5: Delet Data\n");
    printf("6: exot \n");
    printf("choose any optin\n");
    scanf("%d",&n);
    return (n);
}


void riksha(){
    printf("entry succesfully!\n");
    ri++;
    amount=amount+100;
    count++;
}


void car(){
    printf("entry succesfully!\n");
    ca++;
    amount=amount+150;
    count++;
}


void bus(){
    printf("entry succesfully!\n");
    bu++;
    amount=amount+200;
    count++;
}


void showresult(){
    printf("Total entry of Riksha: %d\n",ri);
    printf("Total entry of car: %d\n",ca);
    printf("Total entry of Bus: %d\n",bu);
    printf("No of entry in a vehicle: %d\n",count);
    printf("Total  Amount Collection is: %d\n",amount);
    
}


void deletdata(){
    printf("Delet Successfully!");
    ca=0;
    ri=0;
    bu=0;
    amount=0;
    count=0;
}
