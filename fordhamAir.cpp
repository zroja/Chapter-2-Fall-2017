 1 // Zahin Roja
  2 // September 28, 2017
  3 // Lab 4: Fordham Airlines
  4
  5 #include <iostream>
  6 using namespace std;
  7
  8 int main()
  9 {
 10    // Variables
 11    char destination;
 12    int time;
 13    char week;
 14    double price;
 15    int tickets;
 16    double total;
 17    double pay;
 18    double change;
 19    const int weekday = 150, weeknight = 100, weekendday = 180, weekendnight = 120;
 20
 21     // Displays Decimal Numbers with two decimal places
 22     cout.setf(ios::fixed);
 23     cout.setf(ios::showpoint);
 24     cout.precision(2);
 25
 26    // Input
 27
 28    cout << "Welcome to Fordham Airlines!" << endl;
 29    cout << "What is your destination? ([C]hicago, ([M]iami, ([P]ortland)" ;
 30    cin >> destination;
 31    cout << "What time do you wish to travel? (Enter time between 0-2359) " ;
 32    cin >> time;
 33    cout << "What type of day are you traveling? (Week[E]nd or Week[D]ay?)" ;
 34    cin >> week;
 35
 36    // Processing and Output
 37    switch (destination)
 38    {
 39       case 'C':
 40       case 'c':
 41
 42          if(time > 500 && time < 1900 && (week=='D' || week== 'd'))
  43          {
 44          price = weekday/2;
 45          cout << "Each ticket will cost: $" << price << endl;
 46          }
 47          else if(((time > 1900 && time < 2359) || (time > 0 && time < 500)) && (week=='D' ||week== 'd'))
 48          {
 49          price = weeknight/2;
 50          cout << "Each ticket will cost: $" << price << endl;
 51          }
 52
 53          if (time > 500 && time < 1900 && (week=='E' ||week== 'e'))
 54          {
 55          price = weekendday/2;
 56          cout << "Each ticket will cost:  $" << price << endl;
 57          }
 58          else if(((time > 1900 && time < 2359) || (time > 0 && time < 500))&& (week=='E' ||week== 'e'))
 59          {
 60          price = weekendnight/2;
 61          cout << "Each ticket will cost: $" << price << endl;
 62          }
 63          break;
 64
 65       case 'M':
 66       case 'm':
 67
 68          if (time > 500 && time < 1900&& (week=='D' ||week== 'd'))
 69          {
 70          price = weekday;
 71          cout << "Each ticket will cost: $" << price << endl;
 72          }
 73          else if (((time > 1900 && time < 2359) || (time > 0 && time < 500)) && (week=='D' ||week== 'd'))
 74          {
 75          price = weeknight;
 76          cout << "Each ticket will cost: $" << price << endl;
 77          }
 78
 79
 80          if (time > 500 && time < 1900 && (week=='E' ||week== 'e'))
 81          {
 82          price = weekendday;
 83          cout << "Each ticket will cost: $" << price << endl;
  84          }
 85          else if(((time > 1900 && time < 2359) || (time > 0 && time < 500)) && (week=='E' ||week== 'e'))
 86          {
 87          price = weekendnight;
 88          cout << "Each ticket will cost: $" << price << endl;
 89          }
 90          break;
 91
 92       case 'P':
 93       case 'p':
 94
 95          if (time > 500 && time < 1900 && (week=='D' ||week== 'd'))
 96          {
 97          price = weekday*2;
 98          cout << "Each ticket will cost: $" << price << endl;
 99          }
100          else if(((time > 1900 && time < 2359) || (time > 0 && time < 500)) && (week=='D' ||week== 'd'))
101          {
102          price = weeknight*2;
103          cout << "Each ticket will cost: $" << price << endl;
104          }
105
106          if (time > 500 && time < 1900 && (week=='E' ||week== 'e'))
107          {
108          price = weekendday*2;
109          cout << "Each ticket will cost: $" << price << endl;
110          }
111          else if(((time > 1900 && time < 2359) || (time > 0 && time < 500)) && (week=='E' ||week== 'e') )
112          {
113          price = weekendnight*2;
114          cout << "Each ticket will cost: $" << price << endl;
115          }
116          break;
117 }
118    cout << "How many tickets do you want? " ;
119    cin >> tickets;
120
121    if( tickets < 0)
122    {
123    cout << "You have reported an invalid number of tickets, order cancelled" << endl;
124    return 0;
125    }
126    else
127    {
128    total = price * tickets;
129    cout << "You owe: $" << total << endl;
130    }
131
132    cout << "How much will you pay? $" ;
133    cin >> pay;
134
135    if (pay < total)
136    {
137       cout << "Amount paid is too little, order has been cancelled" << endl;
138       return 0;
139    }
140    else
141       change = pay-total;
142       cout << "You will get $" << change << " in change." << endl;
143       cout << "Your tickets have been ordered!" << endl;
144    return 0;
145 }

