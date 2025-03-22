#include <iostream>
#include <random>
using namespace std;

int main() {
    // Generate machine's choice (1=Rock, 2=Paper, 3=Scissor)
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> dis(1, 3);
    int machineChoice = dis(gen);

    // Get user's choice
    int userChoice;
    cout << "Enter your choice (1=Rock, 2=Paper, 3=Scissor): ";
    cin >> userChoice;
    
    cout << "Machine choice: " << machineChoice << endl;
    cout << "User choice: " << userChoice << endl;
    int user = userChoice - 1;
    int machine = machineChoice - 1;
    
    // Determine the winner using modular arithmetic.
    // (user - machine + 3) % 3 == 0 -> tie
    // (user - machine + 3) % 3 == 1 -> user wins
    // (user - machine + 3) % 3 == 2 -> machine wins
    int result = (user - machine + 3) % 3;
    
    if(result == 0)
        cout << "It's a tie!" << endl;
    else if(result == 1)
        cout << "User wins!" << endl;
    else
        cout << "Machine wins!" << endl;
    
    return 0;
}
