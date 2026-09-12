//wap to print sum of two numbers using add function
// #include<iostream>
// using namespace std;
// int add(int a , int b){
//     return a+b ;
// }
// int main(){
//     int num1, num2;
//     cout << "enter num1 :";
//     cin >> num1;
//     cout << "enter num2 :";
//     cin >> num2;
//     cout << "num1 + num2 = :"<<add(num1 , num2);
//     return 0;
// }
// #include<iostream>
// #include<string>
// using namespace std;
// void greet(string hello ){
//     cout << hello;
// }
// int main (){
//     greet("Hello");
//     return 0;
// }
// #include<iostream>
// using namespace std;
// int square(int a ){
//     return a*a ;
// }
// int main(){
//     int num1 ;
//     cout << "enter the number";
//     cin >> num1 ;
//     cout << "square of number is = "<<square(num1);
//     return 0;
// }
//wap take two integers and make add() and print their sum 
// #include<iostream>
// using namespace std;
// int add(int a , int b){
//     return a+b ;
// }
// int main (){
//     int num1 , num2 ;
//     cout << "enter num1 = ";
//     cin >> num1 ;
//     cout << "enter num2 = ";
//     cin >>num2 ;
//     cout << "sum of num1 and num2 = "<< add(num1 , num2);
//     return 0 ;
// }
//Write  functon even odd check number and tells wheather no is even or odd
// #include<iostream>
// using namespace std ;
// int evenOdd(int a){
//     return a%2 ;
// }
// int main (){
//     int num1 ;
//     cout << "enter the number = ";
//     cin >> num1 ;
//     if(evenOdd(num1) == 0 ){
//         cout << "number is even";
//     }else{
//         cout << "number is odd";
//     }
//     return 0 ;
// }
// write a function maximum() takes input two number and print larger number 
// #include <iostream>
// using namespace std;
// int maximum(int a , int b ){
//     return a>b ;
// }
// int main(){
//     int num1 , num2;
//     cout << "enter 1st no =";
//     cin >> num1 ;
//     cout << "enter 2nd no =";
//     cin >> num2;
//     if(maximum(num1 , num2)==1){
//         cout << " larger number is = "<< num1;
//     }else{
//         cout << "larger number is = " << num2;
//     }
//     return 0 ;
// }
//Write a function add() that takes two integers and returns their sum. Print the returned value in main()
// #include<iostream>
// using namespace std;
// int add(int a , int b){
//     return a+b;
// }
// int main (){
//     int num1 , num2;
//     cout << "enter 1st number = ";
//     cin >> num1;
//     cout << "enter 2nd number = ";
//     cin >> num2;
//     cout << " sum of both numbers = "<< add(num1 , num2);
//     return 0 ;
// }
//Write a function cube() that takes an integer and returns its cube.
// #include<iostream>
// using namespace std;
// int cube(int a ){
//     return a*a*a ;
// }
// int main(){
//     int num1 ;
//     cout << "Enter the no " ;
//     cin >> num1 ;
//     cout << "Cube of this no = "<<cube(num1);
//     return 0 ;
// }
//print wheather no is positive or not 
// #include<iostream>
// using namespace std;
// int ispositive(int a ){
//     return a > 0;
// }
// int main (){
//     int num1 ;
//     cout << "enter no ";
//     cin >> num1;
//     if(ispositive(num1)==1){
//         cout<<"Number is positive ";
//     }else if (num1 < 0){
//         cout << "Number is negative";
//     }else{
//         cout<<"Number is zero ";
//     }
//     return 0 ;
// }
//write function int factorial()print factorials of input number 
// #include <iostream>
// using namespace std;
// int factorial(int n ){
//     int result = 1;
//     for(int i= 1; i<=5; i++ )
//     {
//         result = result*i;
//     }
//     return result ;
    

// }
// int main(){
//     int num1 ;
//     cout << "enter no";
//     cin >> num1;
//     cout << factorial(num1);
//     return 0 ;

// }
//WAP print Area of rectangle using fuction 
// #include <iostream>
// using namespace std;
// int area_of_rectangle (int length , int breadth){
//     return length*breadth;
// }
// int main(){
//     int x,y;
//     cout << "enter length of rectangle";
//     cin >> x;
//     cout << "enter breadth of rectangle";
//     cin >> y;
//     cout<< "Area of rectangle = "<< area_of_rectangle(x,y);
//     return 0;
// }
//wap to print prime number using functions
#include <iostream>
using namespace std;

bool isPrime(int n)
{
    if(n < 2)
    {
        return false;
    }

    for(int i = 2; i < n; i++)
    {
        if(n % i == 0)
        {
            return false;
        }
    }

    return true;
}

int main()
{
    int num;

    cout << "Enter number: ";
    cin >> num;

    if(isPrime(num))
    {
        cout << "Number is Prime";
    }
    else
    {
        cout << "Number is Not Prime";
    }

    return 0;
}