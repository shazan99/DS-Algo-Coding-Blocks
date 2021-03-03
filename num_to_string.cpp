#include <iostream> 
using namespace std; 
  
string one[] = { "", "one ", "two ", "three ", "four ", 
                 "five ", "six ", "seven ", "eight ", 
                 "nine ", "ten ", "eleven ", "twelve ", 
                 "thirteen ", "fourteen ", "fifteen ", 
                 "sixteen ", "seventeen ", "eighteen ", 
                 "nineteen " }; 
  
 
string ten[] = { "", "", "twenty ", "thirty ", "forty ", 
                 "fifty ", "sixty ", "seventy ", "eighty ", 
                 "ninety " }; 
  

string numToWords(int n, string s) 
{ 
    string str = ""; 
     
    if (n > 19) 
        str += ten[n / 10] + one[n % 10]; 
    else
        str += one[n]; 
  
    
    if (n) 
        str += s; 
  
    return str; 
} 
  

string convertToWords(long n) 
{ 
    
    string out; 
  
    out += numToWords(((n / 1000) % 100), "thousand "); 
  
    // handles digit at hundreds places (if any) 
    out += numToWords(((n / 100) % 10), "hundred "); 
  
    if (n > 100 && n % 100) 
        out += "and "; 
  
    // handles digits at ones and tens places (if any) 
    out += numToWords((n % 100), ""); 
  
    return out; 
} 
  
// Driver code 
int main() 
{ 
    // long handles upto 9 digit no 
    // change to unsigned long long int to 
    // handle more digit number 
    long n ;
    cin>>n; 
  
    // convert given number in words 
    cout << convertToWords(n) << endl; 
  
    return 0; 
} 