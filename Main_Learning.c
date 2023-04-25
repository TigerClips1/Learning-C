#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

//TODO add comments about what all the c code do 

//Shape

/*int main()
*{
    *printf("    / |\n");
    *printf("   /  |\n");
    *printf("  /   |\n");
    *printf(" /    |\n");
    *printf("/____ \n");
    *return 0;
*}
*/

// Print hello world

/*int main2()
*{
    *printf("Hello World \n");

    *return 0;
*}
*/

//variables

/*
*int main3()
*{
    *char characterName[] = "Tom";
    *int Age = 67;
    *printf("There once was a man named %s \n", characterName);
    *printf("he was %d years old.\n", Age);
    
    *Age = 30;
    *printf("He really liked the name %s\n", characterName);
    *printf("but did not line being %d.\n", Age);
    
    *return 0;
*}
*/

//Data Type

/*int main4()
*{
    *int age = 40;
    *double gpa = 40.0;
    *char grade = 'A';
    *char phrase [] = "Giraffe Academy";


    *return 0;
*}
*/

//printf basic

/*int main5()
*{
    *int favnum = 90;
    *char myChar = "i"
    *printf("Hello"/"World")
    *printf("Hello WOrld")
    *printf("My favorite number is %d", 500);
    *printf("My favorite %s is %d", "number" , 500);
    *printf("My favorite %s is %d", "number" , favnum);
    *printf("My favorite %c is %d",  myChar , favnum);

    *return 0;
*}
*/


//Working With Numbers

/*int main6()
*{
    *int num = 6;
    *printf("%f", 8.9);
    *printf("%f\n", 5.0 + 4.5); //adding
    *printf("%f\n", 5.0 - 4.5); //subtracting
    *printf("%f\n", 5.0 * 4.5); //multiplying
    *printf("%f\n ", 5.0 / 4.5); //dividing
    *printf("%d\n", 5 / 4); //integer
    *printf("%f\n", 5 / 4.0); //full answer
    *printf("%d", num); //variables forum if you working with number put in a variables
    *printf("%f", pow(2, 3) ); //power
    *printf("%f", sqrt(36)); //square root
    *printf("%f", ceil(36.356));
    *google all the math function for C
    *printf("%f", floor(36.656));//round the numbers 




    *return 0;
*}
*/

//more info about Comments

/*int main7()
{
    anther way of writing comments
    printf("Comments are fun"); 
    
    
    return 0;
}
*/

//Constants

/*int main8()
{
    int num = 5;
    printf("%d\n", num);
    num = 8;
    printf("%d", num);

    const int NUM2 = 6;

    printf("%d\n", NUM2);
    
    printf("%d", NUM2);
    printf("hello");
    printf("%d", 70);
    


    return 0;
}
*/



// Getting User Input basic

/*int main9()
{
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);
    printf("You are %d years old\n", age);
    double gpa;
    printf("Enter your gpa: ");
    scanf("%lf", &gpa);
    printf("your gpa is %f\n", gpa);
    char grade;
    printf("Enter your grade: ");
    scanf("%c", &grade);
    printf("Your grade is %c\n", grade);   
    char name[20];  
    printf("Enter your name: ");
    scanf("%s", name);
    printf("Your name is %s\n", name);
    
    char name[20];  
    printf("Enter your name: ");
    fgets(name, 20, stdin);
    printf("Your name is %s\n", name);

    return 0;
}
*/


//Arrays

/*int main10()
{
    int LuckyNumbers[] = {4, 8, 15, 16, 23, 42};
    int LuckyNumber[10];
    LuckyNumber[1] = 21;
    LuckyNumber[2] = 31;
    printf("%d\n\n", LuckyNumbers[0]);
    LuckyNumbers[2] = 21;
    printf("%d", LuckyNumbers[2]);
    printf("%d\n\n", LuckyNumber[1]);
    printf("%d", LuckyNumber[2]);

    return 0;
}
*/

//Function

/*void sayHi(char name[], int age){
    printf("Hello %s, You Are %d\n", name, age); 
}

int main11()
{
    printf("top\n");
    sayHi("Elliot", 40);
    sayHi("Tom",23);
    sayHi("Jerry", 20);

    printf("Bottom\n");
    return 0;
}
*/

// Return Statement

/*double cube(double num);
int main12()
{
    printf("Answer: %f", cube(7.0));
    return 0;
}
double cube(double num){
    //double result = num * num * num;
    //return result;
    return num * num * num;
}
*/

// if statement

/*int max(int num1, int num2, int num3){
    int result;
     //old hehe
    if(num1 > num2){
        result = num1;

     } else {
        result = num2;
     }

    if(num1 >= num2 && num1 >= num3){
        result = num1;

    } else if(num2 >= num1 && num2 >= num3){
        result = num2;

    } else {
     result = num3;
    }
    return result;
}
int main13(){

    printf("%d", max(10, 2, 3));

    if(3 < 2 || 2 > 5) { //<= >= ==  <  >  !=
        //printf("True");
    } else{
        //printf("False");
    }

    if(!(3 < 2)){ // or you can do this and it will print out false if(!(3 > 2))
        printf("True");
    } else {
        printf("False");
    }
    return 0;
}
*/

//switch statement

/*int main14(){
    
    char grade = 'F'; //change the F to A or B or C or D or F  again
    
    switch(grade){
    case 'A':
        printf("You did great");
        break;
    case 'B':
        printf("You did good");
        break;
    case 'C':
        printf("You did not so bad");
        break;
    case 'D':
        printf("You did not that bad");
        break;
    case 'F':
        printf("Please do better the test next time");
        break;
    default:
        printf("Invalid Grade");
    }
    return 0;
}
*/

// Structs

/*struct Student{
    char name [50];
    char major [50];
    int age;
    double gpa;
};

int main15(){
    
    
    struct Student student1;
    student1.age = 22;
    student1.gpa = 3.5;
    strcpy(student1.name, "Jim" );
    strcpy(student1.major, "Computer" );
    printf("%f\n", student1.gpa);
    printf("%d\n", student1.age);
    printf("%s\n", student1.name);
    printf("%s\n\n", student1.major);
    
    
    struct Student student2;
    student2.age = 23;
    student2.gpa = 3.6;
    strcpy(student2.name, "Elliot" );
    strcpy(student2.major, "Art" );
    printf("%f\n\n", student2.gpa);
    printf("%d\n", student2.age);
    printf("%s\n", student2.name);
    printf("%s\n", student2.major);

    return 0;
}
*/

// While Loops

/*int main16(){
     
     int index = 1;
     int index = 6;
    do{
        printf("%d\n", index);
        index++;
    }while(index <= 5);
    while(index <= 100){
        printf("%d\n", index);
        index = index + 1; // or index ++;
    }
    return 0;
}
*/

//For Loops

/*int main17(){
    int LuckyNumbers[] = {4, 8, 15, 16, 23, 42};
    
    int i;
    for(i = 0; i < 6; i++){
        printf("%d\n", LuckyNumbers[i]);
    }

    return 0;
}
*/

//2D Arrays & Nested Loops
/*int main18(){
    int nums[3] [2] = {
                   {1,2},
                   {3, 4},
                   {5, 6}
                   };
    //printf("%d", nums[1][1]);

    int i, j;
    for(i = 0; i < 3; i++){
        for(j = 0; j < 2; j++){
            printf("%d,", nums[i][j]);
        }
        printf("\n");
    }

    return 0;
}
*/

//Memory Addresses

/*int main19(){
    
    int age = 30;
    double gpa = 3.4;
    char grade = 'A';

    printf("age: %p\ngpa: %p\ngrade: %p", &age, &gpa, &grade);
    
     return 0;
}
*/

//Pointers

/*int main20(){
    int age = 30;
    int * pAge = &age;
    double gpa - 3.4;
    double * pGpa = &gpa;
    char grade = 'A';
    char * pGrade = &grade;

    printf("age's memory address: %p\n", &age);
    
    return 0;
}
*/

//Dereferencing Pointers

/*int main21(){
    int age = 30;
    int *pAge = &age;

    //printf("%p", pAge);
    //printf("%d", *pAge);
    //printf("%d", *&age);
    printf("%d", *&age);// in the video he say you can do this printf("%d", &*&age); but it don't work in vs code so it may only be for codeblock only or i have to #include <something.h>


    return 0;
}
*/

//Writing Files

/*int main22(){
    
    //FILE * fpointer = fopen("employees.txt", "w" ); // r stand for read or w stand for write or a stand for append or /home/$USER/employees.txt/ or for windows c:/etc
    FILE * fpointer = fopen("employees.txt", "a" );

    fprintf(fpointer, "\n Mike, coding");//warn you if you use w it will  replace the entire name and  will override the file to add the name so  be careful or if you use a you can add text with out it being override
    
    fclose(fpointer);
    return 0;
}
*/

//Reading Files

/*int main23(){
    char line[255];
    FILE * fpointer = fopen("employees.txt", "r");
    
    fgets(line, 255, fpointer);
    fgets(line, 255, fpointer);
    printf("%s", line);
    
    fclose(fpointer);
    return 0;
}
*/

int open(){
    
    printf("your PC will open a link to the youtube guide i watch to learn C");
    
    system("start https://www.youtube.com/watch?v=KJgsSFOSQv0&list=PLDC3CtA6ACLo0diiDqwXyyYkFywkIS5dF&index=3&t=12757s");
    system("open https://www.youtube.com/watch?v=KJgsSFOSQv0&list=PLDC3CtA6ACLo0diiDqwXyyYkFywkIS5dF&index=3&t=12757s");
    system("xdg-open https://www.youtube.com/watch?v=KJgsSFOSQv0&list=PLDC3CtA6ACLo0diiDqwXyyYkFywkIS5dF&index=3&t=12757s");

    return 0;
}