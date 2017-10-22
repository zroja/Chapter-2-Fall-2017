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
   do
   {
      // Input
      cout << "Enter number of hours worked : " ;
      cin >> hours;
      cout << "  Enter number of dependents : " ;
      cin >> dependent;
      cout << "                               " << endl;
 
      if (hours <=40)
      {
         grosspay = hours * 16.78;
      }
      else
      {
         grosspay = (40*16.78)+((hours-40) * 25.17) ;
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
