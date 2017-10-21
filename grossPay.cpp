// Zahin Roja
// September 22, 2017
// Homework #3 - Determining gross pay and net gross pay
 
#include <iostream>
using namespace std;
int main()
{
  
   // Variables
   double hours;
   int dependent;
   double pay;
   double grosspay;
   double FederalIncomeTax;
   double StateIncomeTax;
   double SocialSecurity;
   double Uniondues;
   double nettakehome;
   double insurance;
   char rerun;
 
   // Says to display decimal numbers with two decimal places
   cout.setf (ios::fixed);
   cout.setf (ios::showpoint);
   cout.precision(2); 43          grosspay = (40*16.78)+((hours-40) * 25.17) ;
      }

   // Processing and Output
   cout <<"    Gross pay is: " << grosspay << endl;
   cout <<"                         " << endl;
 
   SocialSecurity = grosspay * .06;
   cout << "       SS Tax is: " << SocialSecurity * -1 << endl;
 
   FederalIncomeTax = grosspay * .14;
   cout << "      Fed Tax is: " << FederalIncomeTax * -1 << endl;
 
   StateIncomeTax = grosspay * .05;
   cout << "    State Tax is: " << StateIncomeTax * -1 << endl;

   Uniondues = 10.00;
   cout << "   Union Dues is: " << Uniondues * -1 << endl;
 
   if (dependent  >= 3 )
   {
      insurance = 35;
      cout << "   Insurance is : " << insurance * -1 << endl;
   }
   else
   {
      insurance = 0.00;
      cout << "    Insurance is:  " << insurance * -1 << endl;
   }

      cout << "                         " << endl;
      nettakehome = grosspay - (SocialSecurity + FederalIncomeTax + StateInc    omeTax + Uniondues + insurance);
 
      cout << "Take home pay is: " << nettakehome << endl;
      cout << "Would you like to run another calculation? 1=yes 0=No : " <<     endl;
      cin  >> rerun;
 
   } while (rerun == '1');
   cout << "Have a nice day!" << endl;
   return 0;
 }

 27
 28    do
 29    {
 30       // Input
 31       cout << "Enter number of hours worked : " ;
 32       cin >> hours;
 33       cout << "  Enter number of dependents : " ;
 34       cin >> dependent;
 35       cout << "                               " << endl;
 36
 37       if (hours <=40)
 38       {
 39          grosspay = hours * 16.78;
 40       }
 41       else
 42       {
 43          grosspay = (40*16.78)+((hours-40) * 25.17) ;
 44       }
 45
 46       // Processing and Output
 47       cout <<"    Gross pay is: " << grosspay << endl;
 48       cout <<"                         " << endl;
 49
 50       SocialSecurity = grosspay * .06;
 51       cout << "       SS Tax is: " << SocialSecurity * -1 << endl;
 52
 53       FederalIncomeTax = grosspay * .14;
 54       cout << "      Fed Tax is: " << FederalIncomeTax * -1 << endl;
 55
 56       StateIncomeTax = grosspay * .05;
 57       cout << "    State Tax is: " << StateIncomeTax * -1 << endl;
 58
 59       Uniondues = 10.00;
 60       cout << "   Union Dues is: " << Uniondues * -1 << endl;
 61
 62       if (dependent  >= 3 )
 63       {
 64          insurance = 35;
 65          cout << "   Insurance is : " << insurance * -1 << endl;
 66       }
 67       else
 68       {
 69          insurance = 0.00;
 70          cout << "    Insurance is:  " << insurance * -1 << endl;
 71       }
 72
 73       cout << "                         " << endl;
 74       nettakehome = grosspay - (SocialSecurity + FederalIncomeTax + StateInc    omeTax + Uniondues + insurance);
 75
 76       cout << "Take home pay is: " << nettakehome << endl;
 77       cout << "Would you like to run another calculation? 1=yes 0=No : " <<     endl;
 78       cin  >> rerun;
 79
 80    } while (rerun == '1');
 81       cout << "Have a nice day!" << endl;
 82       return 0;
 83 }
