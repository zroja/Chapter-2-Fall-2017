// Zahin Roja
// October 2, 2017
// Homework #4: Grades
 
#include <iostream>
using namespace std;
 
int main()
{
   // Variables
   int exercise, counter, score, points;
   double finaltotal, totalscore, totalpoints;
   
   // init
  totalscore  = 0;
  totalpoints = 0;
  exercise    = 1;
 
  // Displays Decimal Numbers with two decimal places
  cout.setf(ios::fixed);
  cout.setf(ios::showpoint);
  cout.precision(2);
 
 // Input
 cout << "How many exercises to input? " << endl;
 cin >> counter;
 
 // Processing
 while (counter >0)
 {
    cout << "Score recieved for exercise " << counter << " : " ;
    cin >> score;
    totalscore= totalscore + score;
    cout << "Total points possible for exercise " << counter << " : ";
    cin >> points;
    totalpoints = totalpoints + points;
 
    counter --;
    exercise ++;
 }
 
 // Output
 finaltotal = (totalscore / totalpoints)*100;
 cout << "Your total is " << totalscore << " out of " << totalpoints << " , or " << finaltotal << " % ";
 
 return 0;
 }
