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
#include<iostream>
using namespace std;
int add(int a , int b){
    return a+b ;
}
int main (){
    int num1 , num2 ;
    cout << "enter num1 = ";
    cin >> num1 ;
    cout << "enter num2 = ";
    cin << num2 ;
    cout << "sum of num1 and num2 = "<< add(num1 , num2);
    return 0 ;
}