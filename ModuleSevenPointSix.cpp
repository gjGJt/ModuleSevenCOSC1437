    #include <iostream>
    using namespace std;

    int main() {
//'choice' stores the user input

    char choice;
//left and right handed initialized to 0

    int leftHanded = 0;
    int rightHanded = 0;
// do-while loop with a if statement. Do passes the user input to 'choice', While ends the loop if X is entered, and the if statement adds a value to either left or right handed (lh++,rh++).

    do {
        cout << "Enter an L if you are left-handed, an R if you are right-handed or X to quit: ";
        cin >> choice;

        if (choice == 'L') {
            leftHanded++;
        } else if (choice == 'R') {
            rightHanded++;
        }
    } while (choice != 'X');
// Prints the number of lh and rh students

    cout << "Number of left-handed students: " << leftHanded << endl;
    cout << "Number of right-handed students: " << rightHanded << endl;

    return 0;
