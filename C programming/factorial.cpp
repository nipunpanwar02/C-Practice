// #include<iostream>

// using namespace std;


// int main(){

//     int fact = 1 ;

//     for(int i = 1 ; i <= 5 ;++i){
//         fact = fact *  i ;
//     }
//     cout << fact ; 
//     return 0;



// }

// sum of all even integers till n.



// #include<iostream>
// using namespace std;

// int main(){
//     int sum=0;
//     int n;

//     cin >> n;
//     for (int i=0;i<=n;i=i+2){
//         sum += i;
//     }
//     cout << sum;
//     return 0;
// }



// #include<iostream>
// using namespace std;

// int main(){
//     int sum=0;
//     int n;
//     cin >> n;

//     int flag = n > 0 ? 1 : -1;
//     n = abs(n);
//     for (int i=0;i<=n;i=i+2){
//         sum += i;
//     }
//     cout << sum * flag;
//     return 0;
// } 




#include<iostream>
using namespace std;

int main(){
    int sum=0;
    int n;
    cin >> n;

    
    for (int i=0;i<=n;i=i+2){
        sum += i;

    }

    cout << sum ;
    
    return 0;
} 