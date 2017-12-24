// Zahin Roja
// September 28, 2017
// Lab 4: Fordham Airlines
  
 #include <iostream>
 using namespace std;

 int main()
 {
    // Variables
    char destination;
    int time;
    char week;
    double price;
    int tickets;
    double total; 
    double pay;
    double change;
    const int weekday = 150, weeknight = 100, weekendday = 180, weekendnight = 120;

     // Displays Decimal Numbers with two decimal places
     cout.setf(ios::fixed);
     cout.setf(ios::showpoint);
     cout.precision(2);

    // Input

    cout << "Welcome to Fordham Airlines!" << endl;
    cout << "What is your destination? ([C]hicago, ([M]iami, ([P]ortland)" ;
    cin >> destination;
    cout << "What time do you wish to travel? (Enter time between 0-2359) " ;
    cin >> time;
    cout << "What type of day are you traveling? (Week[E]nd or Week[D]ay?)" ;
    cin >> week;

    // Processing and Output
    switch (destination)
    {
       case 'C':
       case 'c':
           if(time > 500 && time < 1900 && (week=='D' || week== 'd'))
           {
          price = weekday/2;
          cout << "Each ticket will cost: $" << price << endl;
          }
          else if(((time > 1900 && time < 2359) || (time > 0 && time < 500)) && (week=='D' ||week== 'd'))
          {
          price = weeknight/2;
          cout << "Each ticket will cost: $" << price << endl;
          }

          if (time > 500 && time < 1900 && (week=='E' ||week== 'e'))
           {
           price = weekendday/2;
           cout << "Each ticket will cost:  $" << price << endl;
          }
          else if(((time > 1900 && time < 2359) || (time > 0 && time < 500))&& (week=='E' ||week== 'e'))
          {
          price = weekendnight/2;
          cout << "Each ticket will cost: $" << price << endl;
          }
          break;

        case 'M':
        case 'm':

          if (time > 500 && time < 1900&& (week=='D' ||week== 'd'))
          {
          price = weekday;
          cout << "Each ticket will cost: $" << price << endl;
          }
          else if (((time > 1900 && time < 2359) || (time > 0 && time < 500)) && (week=='D' ||week== 'd'))
          {
          price = weeknight;
          cout << "Each ticket will cost: $" << price << endl;
          }


          if (time > 500 && time < 1900 && (week=='E' ||week== 'e'))
          {
          price = weekendday;
          cout << "Each ticket will cost: $" << price << endl;
          }
          else if(((time > 1900 && time < 2359) || (time > 0 && time < 500)) && (week=='E' ||week== 'e'))
          {
          price = weekendnight;
          cout << "Each ticket will cost: $" << price << endl;
          }
       break;

       case 'P':
       case 'p':

          if (time > 500 && time < 1900 && (week=='D' ||week== 'd'))
          {
          price = weekday*2;
          cout << "Each ticket will cost: $" << price << endl;
          }
          else if(((time > 1900 && time < 2359) || (time > 0 && time < 500)) && (week=='D' ||week== 'd'))
          {
          price = weeknight*2;
          cout << "Each ticket will cost: $" << price << endl;
          }

          if (time > 500 && time < 1900 && (week=='E' ||week== 'e'))
          {
          price = weekendday*2;
          cout << "Each ticket will cost: $" << price << endl;
          }
          else if(((time > 1900 && time < 2359) || (time > 0 && time < 500)) && (week=='E' ||week== 'e') )
          {
          price = weekendnight*2;
          cout << "Each ticket will cost: $" << price << endl;
          }
          break;
 }
    cout << "How many tickets do you want? " ;
    cin >> tickets;

    if( tickets < 0)
    {
    cout << "You have reported an invalid number of tickets, order cancelled" << endl;
    return 0;
    }
    else
    {
    total = price * tickets;
    cout << "You owe: $" << total << endl;
    }

    cout << "How much will you pay? $" ;
    cin >> pay;

    if (pay < total)
    {
       cout << "Amount paid is too little, order has been cancelled" << endl;
       return 0;
    }
    else
       change = pay-total;
       cout << "You will get $" << change << " in change." << endl;
       cout << "Your tickets have been ordered!" << endl;
    return 0;
 }

