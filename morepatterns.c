// pattern:-
// 1
// 23
// 345
// 4567
// 56789

// #include <iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cin >> n;
//   for (int i = 1; i <= n; i++)

//     {
//         int count = i;
//         for (int j = 1; j <= i; j++)
//         {
//             cout << count;
//             count = count + 1;
//         }
//         cout << endl;
//     }
// }




// __pattern

/*
1
21
321
4321
54321
*/


// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=i;j++){
//             cout<<i-j+1;
//         }
//         cout<<endl;
//     }
// }

// Pattern:-
// AAA
// BBB
// CCC

// In this method we always have to assign the value of i for n

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=n;j++){
//             if(i==1){
//                 cout<<'A';

//             }else if(i==2){
//                 cout<<'B';
//             }else if(i==3){
//                 cout<<'C';
//             }
//         }
//         cout<<endl;
//     }
// }

// 2nd and efficient method

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=n;j++){
//             char ch='A'+i-1; //Here we are storing the value of A for character increment
//             cout<<ch;
//         }       cout<<endl;
// }
// } 


// pattern:-
// ABC
// ABC
// ABC


// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=n;j++){
//             char ch='A'+j-1; //Here we are storing the value of A for character increment
//             cout<<ch;
//         }       cout<<endl;
// }
// } 


// pattern:-
// ABCD
// EFGH
// IJKL
// MNOP

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     char start ='A';

    
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=n;j++){
            
            
//             cout<<start;
//             start=start+1;
            
//         }
//         cout<<endl;
//     }
// } 


// pattern:-
// 123
// 234
// 345

// #include<iostream>
// using namespace std;
// int main(){

//     int n;
//     cin>>n;
    
   
//   for(int i=1;i<=n;i++){
//          int count = i;
//         for(int j=1;j<=i;j++){
//             cout<<count;

//             count = count+1;
//         }
//         cout<<endl;
//     }
   
// } 

// pattern:-
// ABCD
// BCDE
// CDEF
// DEFG

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
    
//     for(int i=n;i>=;i++){
        
//         for(int j=1;j<=i;j++){
//             char ch = 'A'+i+j-2;
//             cout<< ch;

//         }
//         cout<<endl;
//     }
// }


   


//    pattern:-
// A
// BB
// CCC
// DDDD
// EEEEE
// #include<iostream>
// using namespace std;
// int main(){

//     int n;
//     cin>>n;
    
   
//   for(int i=1;i<=n;i++){
         
//         for(int j=1;j<=i;j++){
//             char start = 'A'+i-1;
//             cout<<start;

            
//         }
//         cout<<endl;
//     }
// }




// pattern:-4
// A 
// B C 
// D E F 
// G H I J 
// #include <iostream>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;
//     char value ='A';
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=i;j++){
//             cout<<value<<" ";
//             value = value+1;
//         }
//         cout<<endl;
//     }
// }



// pattern:-
// A
// BC
// CDE
// DEFG

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
    
//     for(int i=1;i<=n;i++){
        
//         for(int j=1;j<=i;j++){
//             char ch = 'A'+i+j-2;
//             cout<< ch;

//         }
//         cout<<endl;
//     }
// }

// pattern:-

// E
// DE
// CDE
// BCDE
// ABCDE

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         char ch = 'A'+n-i;
//         for(int j=1;j<=i;j++){
//             cout<<ch;
//             ch = ch +1;
//         }
//         cout<<endl;

//     }
// }



// pattern:-

// ABCD
// BCDE
// CDEF
// DEFG

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     for(int i=1;i<=n;i++){
        
//         for(int j=1;j<=n;j++){
//              char ch = 'A'+i+j-2;
//         cout<<ch;
//         }
//         cout<<endl;
       
//     }

// }



// pattern:-
//      *
//     **
//    ***
//   ****
//  *****

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
    

//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 0; j <= n-i; j++)

//         {
//             cout << " ";
//         }
//         for (int m = 1; m <= i; m++)
//         {
//             cout << "*";
//         }
//         cout << endl;
        
//     }
// }




// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=n-i;j++){
//             cout<<" ";
//         }
//         for(int j=1;j<=i;j++){
//             cout<<"*";
//         }
//         cout<<endl;
        
//     }
// }

// Pattern:-
//  ****
//   ****
//    ****
//     ****


// #include<iostream>
//  using namespace std;
// int main(){

//     int n;
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         for(int j=0;j<i;j++){
//             cout<<" ";
//         }
//         for(int m=0;m<n;m++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
 
// }

// pattern:-
//    ****
//   ****
//  ****
// ****

// #include<iostream>
//  using namespace std;
// int main(){

//     int n;
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         for(int j=0;j<n-i;j++){
//             cout<<" ";
//         }
//         for(int m=0;m<n;m++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
 
// }

//Diamond pattern

// #include<iostream>

// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     for(int i =1;i<=n;i++){
//         for(int j=1;j<=n-i;j++){
//             cout<<" ";
//         }
//         for(int j=1;j<=i;j++){
//             cout<<"* ";
//         }
//         cout<<endl;
//     }
//     for(int i=n-1;i>=1;i--){
//         for(int j=1;j<=n-i;j++){
//             cout<<" ";
//         }
//         for(int j=1;j<=i;j++){
//             cout<<"* ";
//         }
//         cout<<endl;
//     }
// }