
// 28.Write a program to implement to find the largest number of the 3.

// #include <stdio.h>
// #include <conio.h>
// int main() {
//     int num1, num2, num3;

//     printf("Enter The Value OF num1 = ");
//     scanf("%d", &num1);
//     printf("Enter The Value OF num2 = ");
//     scanf("%d", &num2);
//      printf("Enter The Value OF num3 = ");
//     scanf("%d", &num3);

//     if (num1 >= num2 && num1 >= num3)
//         printf("The largest number is %d\n", num1);
//     else if (num2 >= num1 && num2 >= num3)
//         printf("The largest number is %d\n", num2);
//     else
//         printf("The largest number is %d\n", num3);

//     getch();
// }


// 29.Write a program to implement to find even or odd number.

// #include <stdio.h>
// #include <conio.h>

// int main(){
//     int num1;
//     printf("Enter The Value Of num1 = ");
//     scanf("%d", &num1);

//     if(num1%2 == 0){
//         printf("Given Number Is EVEN ");
//     }
//     else{
//         printf("Given Number Is ODD ");
//     }
//     getch();
// }


// 30.Write a program to implement to check whether a person is eligible to vote or not.

// #include <stdio.h>
// #include <conio.h>

// int main() {
//     int age;

//     printf("Enter your age: ");
//     scanf("%d", &age);

//     if (age >= 18)
//         printf("You are eligible to vote.\n");
//     else
//         printf("You are not eligible to vote.\n");

//     getch();
// }


// 31. Write a program to implement to calculate the grade of the student 
// according to the specified marks.

// #include <stdio.h>
// #include <conio.h>

// int main() {
//     int marks;
//     printf("Enter the marks obtained by the student out of 100: ");
//     scanf("%d", &marks);

//     if (marks >= 90 && marks <= 100)
//         printf("Grade: A\n");
//     else if (marks >= 80 && marks < 90)
//         printf("Grade: B\n");
//     else if (marks >= 70 && marks < 80)
//         printf("Grade: C\n");
//     else if (marks >= 60 && marks < 70)
//         printf("Grade: D\n");
//     else if (marks >= 50 && marks < 60)
//         printf("Grade: E\n");
//     else if (marks >= 0 && marks < 50)
//         printf("Grade: F\n");
//     else
//         printf("Invalid marks entered.\n");

//     getch();
// }


// 26. Write a program to implement the given number is positive or negative.

// #include <stdio.h>
// #include<conio.h>

// void main() {
//     int number;

//     printf("Enter a number: ");
//     scanf("%d", &number);

//     if (number > 0)
//         printf("%d is a positive number.\n", number);
//     else if (number < 0)
//         printf("%d is a negative number.\n", number);
//     else
//         printf("The number is zero.\n");

//     getch();
// }



// 27. Write a program to implement the given 2 number? What is the largest

// #include <stdio.h>
// #include<conio.h>

// void main() {
//     int num1, num2;

//     printf("Enter The Value Of num1 = ");
//     scanf("%d",&num1);
//     printf("Enter The Value Of num2 = ");
//     scanf("%d",&num2);

//     if (num1 > num2)
//         printf("The largest number is %d\n", num1);
//     else if (num2 > num1)
//         printf("The largest number is %d\n", num2);
//     else
//         printf("Both numbers are equal\n");

//     getch();
// }




// 32. Write a program to implement to print all weeks days

// #include <stdio.h>
// #include<conio.h>

// void main() {
//     char *days_of_week[] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", 
//     "Friday", "Saturday"};

//     int i = 0;
//     printf("Days of the week:\n");
//     while (i < 7) {
//         printf("%d. %s\n", i+1, days_of_week[i]);
//         i++;
//     }

//     getch();
// }



// 33.Write a program to implement to print all months of year.

// #include <stdio.h>
// #include<conio.h>

// void main() {
//     // Array containing names of months
//     char *months[] = {"January", "February", "March", "April", "May", "June",
//     "July", "August", "September", "October", "November", "December"};

//     // Iterating over the array and printing each month
//     printf("Months of the year:\n");
//     for (int i = 0; i < 12; i++) {
//         printf("%d. %s\n", i+1, months[i]);
//     }

//     getch();
// }




// 34. Write a program to implement to print 1 to 100 numbers.

// #include <stdio.h>
// #include<conio.h>

// void main() {
//     printf("Numbers from 1 to 100:\n");
    
//     // Loop to print numbers from 1 to 100
//     for (int i = 1; i <= 100; i++) {
//         printf("%d\n", i);
//     }

//     getch();
// }




// 35. Write a program to implement to print sum of digit

// #include <stdio.h>
// #include<conio.h>

// void main() {
//     int number, digit, sum = 0;

//     printf("Enter a number: ");
//     scanf("%d", &number);

//     // Loop to extract each digit and add it to sum
//     while (number > 0) {
//         digit = number % 10; // Extract the last digit
//         sum += digit; // Add the digit to sum
//         number /= 10; // Remove the last digit
//     }
//     printf("Sum of digits: %d\n", sum);

//     getch();
// }


// 36. Write a program to implement to given number is prime or not

// #include <stdio.h>
// #include <conio.h>

// void main() {
//     int num;
//     bool isPrime = true;

//     printf("Enter a number: ");
//     scanf("%d", &num);

//     if (num <= 1) {
//         isPrime = false;
//     }
//     else {
//         for (int i = 2; i * i <= num; i++) {
//             if (num % i == 0) {
//                 isPrime = false;
//                 break;
//             }
//         }
//     }
//     if (isPrime) {
//         printf("%d is a prime number.\n", num);
//     }
//     else {
//         printf("%d is not a prime number.\n", num);
//     }

//     getch();
// }




// 37. Write a program to implement to print 10 to 1 number.

// #include <stdio.h>
// #include<conio.h>

// void main() {

//     for (int i = 10; i >= 1; i--) {
//         printf("%d\n", i);
//     }

//     getch();
// }







// 38. Write a program to implement to print 2,4,6 ... to 10

// #include <stdio.h>
// #include<conio.h>

// void main() {
//     // Iterating from 2 to 10 with a step of 2
//     int num = 2;
//     while (num <= 10) {
//         printf("%d\n", num);
//         num += 2;
//     }
//     getch();
// }





// 39 Write a program to implement to print the Fibonacci series up to that number

// #include <stdio.h>
// #include <conio.h>

// int main() {
//     int num, first = 0, second = 1, next;

//     printf("Enter the number up to which Fibonacci series should be printed: ");
//     scanf("%d", &num);

//     printf("Fibonacci Series up to %d:\n", num);

//     while (first <= num) {
//         printf("%d, ", first);
//         next = first + second;
//         first = second;
//         second = next;
//     }

//     getch();
// }








