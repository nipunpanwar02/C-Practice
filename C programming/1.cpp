// #include<iostream>
// using namespace std;
// int main(){
//     int a;
//     cin>>a;
//     if(a%2==0){
//         cout<<"Even"<<endl;
//     }
//     else{
//         cout<<"Odd";
//     }

//     return 0;
// }


// #include <iostream>
// using namespace std;

// int main() {
//     char op;
//     float num1, num2;

//     cout << "Enter operator (+, -, *, /): ";
//     cin >> op;

//     cout << "Enter two numbers: ";
//     cin >> num1 >> num2;

//     switch(op) {
//         case '+':
//             cout << "Result: " << num1 + num2;
//             break;
//         case '-':
//             cout << "Result: " << num1 - num2;
//             break;
//         case '*':
//             cout << "Result: " << num1 * num2;
//             break;
//         case '/':
//             if (num2 != 0)
//                 cout << "Result: " << num1 / num2;
//             else
//                 cout << "Error! Division by zero";
//             break;
//         default:
//             cout << "Invalid operator!";
//     }

//     return 0;
// }




// #include<iostream>
// using namespace std;

// int main(){
//     int a,b;
//     cin >> a;
//     cin >> b;
//     if (a>=20){
//         cout << "a" << endl;
//         if (b>=40){
//             cout << "much greater" << endl;
//         }
//         else{
//             cout << "not that much" << endl;
//         }
        
//     }
//     else{
//         cout << "small";
//     }
//     return 0;
// }


// #include<iostream>
// using namespace std;

// int main(){
//     int a,b;
//     cin >> a;
//     cin >> b;
//     if (a>b){
//         cout << "a is bigger" << endl;
//     }
//     else{
//         cout << "b is bigger";
//     }
//     return 0;
// }





// #include<iostream>
// using namespace std;

// int main(){
//     int a,b,c;
//     cin >> a;
//     cin >> b;
//     cin >> c;
//     if (a>b && a>c){
//         cout << "a is biggest" << endl;
//     }
//     else if(b>a && b>c){
//         cout << "b is biggest" << endl;
//     }
//     else{
//         cout << "c is biggest";
//     }
//     return 0;
// }



// #include<iostream>
// using namespace std;

// int main(){
//     int a;
//     cin >> a;
//     if (a/100==0 || a/400==0 && a/4!=0){
//         cout << "a is leap year" << endl;
//     }
//     else{
//         cout << "a is not leap year";
//     }
//     return 0;
// }




// #include<iostream>
// using namespace std;
// int main(){
//     int marks;
//     cin >> marks;
//     if(marks<60) cout << "F";
//     else if(marks<=69) cout << "D";
//     else if(marks<=79) cout << "C";
//     else if(marks<=89) cout << "B";
//     else cout << "A";
//     return 0;
// }



// #include <iostream>
// using namespace std;

// int main() {
//     char ch;
    
//     cout << "Enter a character: ";
//     cin >> ch;
    
//     ch = tolower(ch);
//     if (isalpha(ch)) {

//         if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
//             cout << ch << " is a vowel." << endl;
//         } else {
//             cout << ch << " is a consonant." << endl;
//         }
//     } else {
//         cout << ch << " is not a letter." << endl;
//     }
    
//     return 0;
// }


