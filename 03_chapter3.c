#include <stdio.h>
//conditional statements
int main() {
    int age = 10;
    if(age>10);{
    printf("We are inside if\n");
    printf("your age is greater than 10\n");
    }
    if(age%5==0);{
    printf("We are inside another if\n");
    printf("your age is divisible by 5");
    }

    
    return 0;
}

#include <stdio.h>

int main() {
    int age = 5;

    if(age>10){
    printf("We are inside if\n");
    printf("your age is greater than 10\n");
    }

    else{
        printf("Your age is not greater than 10");
    }
    return 0;
}
//Non_zero 
#include <stdio.h>

int main() {
    
    if(1){
        printf("This if will executed \n");
    }
    if(2345){
        printf("This if is also executed\n");
    }
    if(1.27){
        printf("This if is also executed\n");
    }
    if('c'){
        printf("This character inside if will also executed\n");
    }
    if(0){
        printf("I am zero, i will not executed");
    }
    return 0;
}
//logical
#include <stdio.h>

int main(){
    int a = 1;
    int b = 1;
    printf("The value of a and b is %d\n", a && b); // and operator gives true when both condition is true

    printf("The value of a or a is%d\n", a || b); // or operator gives true when atleast 1 condition is true

    printf("The value of not(a) is %d\n", !a); // not operaor the operator who makes true to false fasle to true

    if(a && b){
        printf("Both are true\n");
    }
    // is same as writing
    if(a){
        if(b){
        printf("both are true");
        }
    } 
    return 0;
}

//else-if

#include <stdio.h>

int main() {
    int age = 67;

    if(age>60){
        printf("You can drive and you are a senior citizen");

    }
    else if(age>40){
        printf("you can drive and you are elder");//it can be many elseif
        
    }

     else if(age>18){
        printf("you can drive");
    }
    // else{
    //     printf("You cannot drive");
    // }optional upto you..
    return 0;
}
//ternary
#include <stdio.h>

int main()
{
    // condition ? expression-if-true : expression-if-false
    int a = 345;
    int b = 6749;
    a>b?printf("a is greater"):printf("b is greater");
    return 0;
}
//switch.c

#include <stdio.h>

int main()
{
    int a;
    printf("Enter a");
    scanf("%d", &a);
    switch (a){
    case 1:
        printf("You entered 1\n");
    break;

    case 2:
        printf("You entered 2\n");
    break;
    case 3:
        printf("You entered 3\n");
    break;
    case 4:
        printf("You entered 4\n");
    }
    return 0;

}

//quiz
#include <stdio.h>

int main() {
    char grade;
    int marks = 89;

    if(marks <= 100 && marks >= 90){
        grade = 'A';
    }
    else if(marks < 90 && marks >= 80){
        grade = 'B';
    }
    else if(marks < 80 && marks >= 70){
        grade = 'C';
    }
    else if(marks < 70 && marks >= 60){
        grade = 'D';
    }
    else if(marks < 60 && marks >= 50){
        grade = 'E';
    }
    else{
        grade = 'F';
    }

    printf("Grade = %c", grade);

    return 0;
}