#include<bits/stdc++.h>
using namespace std;
int main()
{
     int n, num, digit, rev = 0;

     cout << "Enter a positive number: ";
     cin >> num;
     n = num;
         while(num !=0){
            // 121--> , 12 ,1
         digit = num % 10;// 1 ,2,0
         rev = (rev * 10) + digit;//1,12,120
         num = num / 10;// 121/10=12,1,0
     }
     cout << " The reverse of the number is: " << rev << endl;
     if (n == rev)
         cout << " The number is a palindrome.";
     else
         cout << " The number is not a palindrome.";
    return 0;                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                 
}
