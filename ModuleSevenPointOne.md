    #include <iostream>
    using namespace std;

    int main() {
//variables to be used in the loop and then multiplied

    int num, numten, numtwo;
// loop

    for (num = 0; num < 10; num++) {
        //multiplies the numbers in the loop by 10 and 2
        numten = num * 10;
        numtwo = num * 2;
        
// prints the numbers from 0 to ten along with their values multiplied by 2 and 10

      cout << "num: " << num << ", numten: " << numten << ", numtwo: " << numtwo << endl;
    }

    return 0;
    }
