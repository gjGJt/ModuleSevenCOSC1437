     #include <iostream>
    using namespace std;

    int main() {
 // prints the values to the screen
 
    cout << "0 through 10 multiplied by 2 and by 10." << endl;
// for-loop that does the same thing as while loop in 7.1

    for (int i = 0; i <= 10; ++i) {
//Values are printed to the screen

        cout << "Number: " << i << endl;
        cout << "Multiplied by 2: " << (i * 2) << endl;
        cout << "Multiplied by 10: " << (i * 10) << endl;
    }
    
    return 0;
    }
