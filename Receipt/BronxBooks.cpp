  // Zahin Roja
  // September 21, 2017
  // Lab3: Receipt

  #include <iostream>
 
  using namespace std;
  
  int main()
  {
    // Variables
    string name;
    int Cervantes;
    int Homer;
    int Shakespeare;
    double total;
    double salestax;
    double finalprice;
    double moneypaid;
    double change;
    char sign = '$';
    //Displays Decimal Numbers with two decimal places
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
 
    // Input
    cout << "Welcome to the Bronx Bookstore" << endl ;
    cout << "Enter your first name: " ;
    cin >> name;
    cout << "Enter number of Cervantes books : " ;
    cin >> Cervantes;
    cout << "Enter number of Homer books : " ;
    cin >> Homer;
    cout << "Enter number of Shakespeare books : " ;
    cin >> Shakespeare;
 
    // Processing and Output
    total = ( Cervantes * 41.25) + (Homer * 15.85) + (Shakespeare * 30.50);
    salestax = total * .1;
    finalprice = salestax + total;
 
    cout << "Total cost of your order is: " << sign << finalprice << endl;
    cout << "How much money will you pay? " << sign;
    cin >> moneypaid;
 
    change = moneypaid - finalprice;
 
    // Recieipt Printed Out
    cout << "--------" << endl;
    cout << "Customer : " << name << endl;
    cout << "--------" << endl;
    cout << "Item \t\tNumber\tPrice" << endl;
    cout << "Cervantes \t"       << Cervantes << "\t$" << Cervantes * 41.25 <    < endl;
    cout << "Homer \t\t"         << Homer << "\t$" <<  Homer * 15.85 << "\t"     << endl;
    cout << "Shakespeare \t" << Shakespeare << "\t$" << Shakespeare * 30.50 <    < endl;
    cout << "--------" << endl;
    cout << "Tax" << "\t" "\t" "\t$"<< salestax     << endl;
    cout << "--------"                         << endl;
    cout << "Total" << "\t" "\t" "\t$" << finalprice << endl;
    cout << "User pay" << "\t" "\t$"<< moneypaid << endl;
    cout << "--------" << endl;
    cout << "Change" << "\t" "\t" "\t$"<< change << endl;
 
    return 0;
 }
