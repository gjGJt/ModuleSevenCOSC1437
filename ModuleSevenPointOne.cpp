    #include <iostream>
      using namespace std;

    int main() { 
//statement

    cout << "0 through 10 multiplied by 2 and by 10." << endl;
//while loop
    
    int i = 0;
    while (i <= 10) {
//prints the values along with their values multiplied

        cout << "Number: " << i << endl;
        cout << "Multiplied by 2: " << (i * 2) << endl;
        cout << "Multiplied by 10: " << (i * 10) << endl;
        i++;
    }
    
    return 0;
    }
