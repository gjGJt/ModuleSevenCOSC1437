#include <iostream> 
// Include the necessary library for input/output operations
using namespace std; 
// Use the standard namespace for convenience

int main() { 
// Start of the main function
// Song titles
    string songTitles[] = {"Hiss", "Loving on Me", "Cruel Summer", "Lose Control", "Greedy"}; 
    // Array to store song titles

  // Variables to store user ratings
  
    int ratings[5]; 
  // Array to store user ratings for each song
  
    int numSongs = 5; 
// Number of songs

    int totalRatings = 0; 
// Variable to store the total sum of ratings

    int numRatings = 0; 
    
// Variable to store the number of ratings entered by the user

// Loop to get ratings from the user

    cout << "Enter rating for top songs (0-4), or enter a negative number to quit:" << endl; 
// Prompt the user to enter ratings

    for (int i = 0; i < numSongs; ++i) { // Loop through each song
        cout << "Enter rating for \"" << songTitles[i] << "\": "; 
  // Prompt the user for rating of the current song
  
        cin >> ratings[i]; 
  // Read the rating entered by the user

  // Check if the user wants to quit
  
        if (ratings[i] < 0) { 
  // If the rating entered is negative
  
            break; 
  // Exit the loop
  
        }

  // Update total and count of ratings
  
        totalRatings += ratings[i]; 
  // Add the current rating to the total sum
  
        numRatings++; 
  // Increment the count of ratings

    }

 // Calculate and display average rating
 
    if (numRatings > 0) { 
  // If at least one rating was entered
  
        double averageRating = static_cast<double>(totalRatings) / numRatings; 
   // Calculate the average rating
   
        cout << "Average Star Value: " << averageRating << endl; 
  // Display the average rating
  
    } else { 
  // If no ratings were entered
  
        cout << "No ratings entered. Exiting program." << endl; 
  // Inform the user that no ratings were entered
    }

    return 0; // Return 0 to indicate successful program execution
}

