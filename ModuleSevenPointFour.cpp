    #include <iostream>
    using namespace std;

    int main() {
  //reverse the order of 7.3, sets the process to be carried out first and then sets the condition upon which it may be carried out
    
    cout << "0 through 10 multiplied by 2 and by 10." << endl;
  //initialized to 0
  
    int i = 0;
    do {
  // prints the values along with its products provided the subsequent condition is met
  
        cout << "Number: " << i << endl;
        cout << "Multiplied by 2: " << (i * 2) << endl;
        cout << "Multiplied by 10: " << (i * 10) << endl;
        i++;
  //loop iterates until it reaches 10 counts
  
    } while (i <= 10);
    
    return 0;
    }

