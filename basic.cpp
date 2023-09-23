// pattern:-

// ***
// ***
// ***

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     int i = 1;
//     while (i <= n)
//     {
//         int j = 1;
//         while (j <= n)
//         {
//             cout << "*";
//             j = j + 1;
//         }
//         cout << endl;
//         i = i + 1;
//     }
// }

// **************************************************************

// pattern:

// 1111
// 2222
// 3333
// 4444

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     int i = 1;
//     while (i <= n)
//     {
//         int j = 1;
//         while (j <= n)
//         {
//             cout << i;
//             j = j + 1;
//         }
//         cout << endl;
//         i = i + 1;
//     }
// }

// pattern:-

// 1 2 3 4 5
// 6 7 8 9 10
// 11 12 13 14 15
// 16 17 18 19 20
// 21 22 23 24 25

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     int i = 1;
//     int a = 1;

//     while (i <= n)
//     {
//         int j = 1;
//         while (j <= n)
//         {
//             cout << i << " ";
//             a = a + 1;
//             j = j + 1;
//         }
//         cout << endl;

//         i = i + 1;
//     }
// }

// pattern :-
// *
// **
// ***
// ****
// *****

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     int i = 1;
//     for (i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= i; j++)
//         {
//             cout << "*";
//         }
//         cout << endl;
//     }
// }

// pattern:-
// *****
// ****
// ***
// **
// *

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     int i = 1;
//     // int num = n;
//     for (i = 0; i < n; i++)
//     {
//         for (int j = 0; j < n - i; j++)
//         {
//             cout << "*";
//         }

//         cout << endl;
//     }
// }

// Pattern:-

// 654321
// 654321
// 654321
// 654321
// 654321
// 654321

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = n; j >= 1; j--)
//         {
//             cout << j;
//         }
//         cout << endl;
//     }
// }

// pattern:-

// 1 2 3
// 4 5 6
// 7 8 9

// #include <iostream>
// using namespace std;
// int main()
// {

//     int n;
//     cin >> n;
//     int count = 1;
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= n; j++)
//         {
//             cout << count;
//             count = count + 1;
//         }
//         cout << endl;
//     }
// }

// pattern:-

// 1
// 2 2
// 3 3 3
// 4 4 4 4

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= i; j++)
//         {
//             cout << i;
//         }
//         cout << endl;
//     }
// }

// Pattern

// 1
// 2 3
// 3 4 5
// 4 5 6 7
// 5 6 7 8 9
// 6 7 8 9 10 11
// 7 8 9 10 11 12 13

// #include <iostream>
// using namespace std;
// int main()
// {

//     int n;
//     cin >> n;
//     int count = 1;
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= i; j++)
//         {
//             cout << count;
//             count = count + 1;
//         }
//         cout << endl;
//     }
// }

// pattern:-

// * * * *
// *     *
// *     *
// *     *
// * * * *

// #include <iostream>
// using namespace std;

// int main()
// {

//     int row;
//     cin >> row;

//     int col;
//     cin >> col;

//     for (int i = 1; i <= row; i++)
//     {
//         for (int j = 1; j <= col; j++)

//         {
//             if (i == 1 || i == row || j == 1 || j == col)
//             {
//                 cout << "*";
//             }
//             else
//             {
//                 cout << " ";
//             }
//         }
//         cout << endl;
//     }
// }



// #include <iostream>
// using namespace std;

// int main()
// {

//     int row;
//     cin >> row;

//     int col;
//     cin >> col;

//     for (int i = 1; i <= row; i++)
//     {
//         for (int j = 1; j <= col; j++)

//         {
//             if (i == 1 || i == row || j == 1 || j == col)
//             {
//                 cout << "*";
//             }
//             else
//             {
//                 cout << " ";
//             }
//         }
//         cout << endl;
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
//     int num = n;

//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = num; j >= 1; j--)

//         {
//             cout << " ";
//         }
//         for (int m = 1; m <= i; m++)
//         {
//             cout << "*";
//         }
//         cout << endl;
//         num--;
//     }
// }

//     *
//    * *
//   * * *
//  * * * *
// * * * * *

// #include <iostream>
// using namespace std;

// int main()
// {

//     int n = 5;

//     for (int i = 1; i <= n; i++)
//     {

//         for (int j = 0; j < n - i; j++)
//             cout << " ";

//         for (int j = 1; j <= i; j++)
//             cout << "* ";
//         cout << endl;
//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     int i;
//     for (i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= n; j++)
//         {
//             cout << i;
//         }
//         cout << endl;
//     }
// }