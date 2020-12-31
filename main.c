/*
 * C is a compiled language
 * C is not object Oriented
 * C is statistically typed -> variable type is given upon declaration
 * - Variables and data types
 * - Operators
 * - Control Flow Statements
 * - Arrays and Strings
 * - Functions
 * - Structs
 * - Pointers and memory management
 * */


#include <stdio.h>
#include <stdbool.h>
#include <strings.h>

//Structs

struct rectangle {
    int length;
    int width;
};
void struucts(){
    struct rectangle myRectangle = {5,10};
    printf("The length %d. Width :%d\n",myRectangle.length,myRectangle.width);
}

//Pointers

int pointers(){
   int a = 100;
   int *aPtr = &a; // This is declaring a pointer
   printf("a = %d\n",a);
   printf("*b = %d\n", *aPtr); // This is de-referencing a Pointer

   *aPtr = 40;
    printf("a = %d\n",a);
    printf("*b = %d\n", *aPtr); // This is de-referencing a Pointer
    return 0;
}

//STRINGS

int stringsz(){
    printf("What is your name");
    char name[20];
    scanf("%s",name);
    int size = 0;
    while(name[size] != '\0'){
        ++size;
    }
    printf("The size of your name is %d\n",size);
    printf("The string BLOCK is working well");

    // But you can still use some of the methods from the string Library to do that
    printf("The size of the name is %lu \n",strlen(name));

    // another inbuilt function is strcmp wwhich is string compare

    if (strcmp(name,"Libetry\n")){
        printf("This is Hilarious \n");

    }
    else{
        printf("No way");
    }

    // Copying a string
    char copy[20];
    strcpy(copy,name);
    printf("%s",copy);

    // for concatenation you use strcat method....

    return 0;
}

//arrays

int arrays(){
    int ages[] = {1,4,60,43,54,3};


    printf("The arrays block is working \n");
    return 0;
}
//loops
int loops(){
    // initialisation
    // comparison
    // update
    for (int i=0;i<10;i++){
        printf("This is i %d \n",i);
    }
    int ages[] = {12,34,13,67,65,66,78,57,78,30,11};
    int calculatedSize = sizeof(ages)/sizeof(ages[0]); // finding the size of the array
    for (int i=0;i<calculatedSize;i++){
        printf("%d \n",ages[i]);
    }
    // while loops
    int number = 20;
    while (number>0){
        printf("%d \n",number);
        --number;
    }
    return 0;
}

int logic(int num){
    if (num==1){
        printf("its correct \n");
    }
    else if (num==2){
        printf("The number was 2 \n");
    }
    else{
        printf("Its not correct \n");
    }
    printf("The logic blok is working \n");

    int menuChoice = num;
    switch(menuChoice){
        case 0:
            printf("This is case 0");
            break;
        case 1:
            printf(" This is case 1");
            break;
        case 2:
            printf("This is case 2");
            break;
        default:
            printf("This is the default case");


    }

    // ternary operator;
    double balance = num;
    printf("\n");
    balance >0? printf("You have enough money \n"): printf("Balance is less than 0 \n");
    return 0;
}
//operators
int operators(){
    printf("Operators function is working \n");
    // +, -, ||, ! and so on
    int a = 1;
    a++;
    ++a;
    a+=1;

    printf("The value of a is %lu\n",a);

    --a;
    a-=1;
    a--;
    printf("The value of a is %lu",a);
    return 0;
}
// strings
int variblesAndDataTypes(){
    int a = 10;
    double b =10.5; // 64 bit number
    float c= 10; // 32 bit number
    char d = 'a';
    char e[]="char array"; // aka string
    bool f = false;
    int zero = .99999999;
    printf("zero is %d\n",zero);
    printf("Variables and dataTypes is working \n");
    // dividing an integer by an integer gives you an integer
    int slices = 17;
    int numOfPeople = 2;
    double piecesPerPerson = slices/numOfPeople;
    printf("Each person will get %lf",piecesPerPerson);

    // we have to do something called type casting to go around this
    double piecesperP = (double) slices/numOfPeople;
    printf("The actual pieces one get is %lf",piecesperP);

    return 0;
}

int stringsWork(){
    printf("StringsWork function is working");
    char name[5]; // char array for 20 characters -> can only store 19 characters, last is used by '\0'
    scanf("%s",name);
    printf("The name you put is %s",name);
    return 0;
}

int main() {
    struucts();
    pointers();
    stringsz();
    arrays();
    loops();
    printf("Hello, World!\n");
    printf("This is a C-running environment!");
    int x= 50;
    int y; // declaration
    y = 10; //  initialisation
    printf("%s Hi","Liberty\n");
    printf("The number is %d\n",x);
    // Getting the input from the User
    printf("Give me the radius");
    int radius;
    scanf("%d",&radius); // & sign is called the address-of-operator (pointer)
    // scanf is for getting the input from the user
    printf("You chose %d as the value if the  radius\n",radius);

    stringsWork();
    variblesAndDataTypes();
    operators();
    logic(radius);

     return x*y;
}



