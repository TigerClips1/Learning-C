#include <stdio.h>
#include <stdlib.h>
#include <math.h>


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


/*
*variables
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

//TODO watch Timestamps 1:54:10 video if statement
/*int main(){

    return 0;
}
*/