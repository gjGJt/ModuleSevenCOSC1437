#include <iostream>
using namespace std;
//

    int main() {
// loop for outer rows, iterates till 5 counts

    for (int i = 1; i <= 5; ++i) {
    
   // loop for columns, iterates till 3 counts (nested, so that the conditions for printing an asterisk is dependent on its position relative to the outer row).
        
        for (int j = 1; j <= 3; ++j) {
        
  // asterisks for row 1, 3, and 5
  
            if (i == 1 || i == 3 || i == 5) {
                cout << "*";
            } else {
  // asterisks are printed only for the first column in other rows
  
                if (j == 1) {
                    cout << "*";
                } else {
  // a space is printed for the second and third columns in other rows
  
                    cout << " ";
                }
            }
        }
  // end
  
        cout << endl;
    }
    
    return 0;
}
