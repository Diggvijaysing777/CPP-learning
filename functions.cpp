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
#include<iostream>
using namespace std;
int cube(int a ){
    return a*a*a ;
}
int main(){
    int num1 ;
    cout << "Enter the no " ;
    cin >> num1 ;
    cout << "Cube of this no = "<<cube(num1);
    return 0 ;
}