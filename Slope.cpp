 // Zahin Roja
 // September 14, 2017
 // Lab 2: Slope of a line

 #include <iostream>
 using namespace std;

 int main()
 {
    // variables
    double xposition1, xposition2;
    double yposition1, yposition2;
    double slopey;

    // input
    cout << "Enter the value for the x1 : ";
    cin >> xposition1;
    cout << "Enter the value for the y1 : ";
    cin >> yposition1;
    cout << "Enter the value for the x2 : ";
    cin >> xposition2;
    cout << "Enter the value for the y2 : ";
    cin >> yposition2;

    // processing
    slopey = (yposition2 - yposition1) / (xposition2 - xposition1);
 
    // output
    cout << "The slope for the line that connects two points " << endl;
    cout << "( " <<xposition1<< " , " <<yposition1<< ") and (" <<xposition2<<     " , " <<yposition2<< " ) is " << slopey << endl;

    return 0;
 }
