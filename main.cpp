#include <iostream>
#include <vector>

using namespace std;

int main() {
    
    cout << "Welcome to Ian's prime numbers generator.\n";
    cout << "Please enter the max value limit.\n$ ";
    int maxVal = 0;
    cin >> maxVal;

    vector<bool> visited{};
    vector<int> primes{};

    for(int i = 0; i <= maxVal; i++) {
        visited.push_back(false);
    }

    primes.push_back(1);
    visited[1] = true;

    for(int i = 2; i < maxVal; i++) {
        if(!visited[i]) { // not visisted
            primes.push_back(i);
            int factor = 1;
            int mult = i*factor;
            while(mult < maxVal) {
                visited[mult] = true;
                factor++;
                mult = i*factor;
            }
            
        }
        
    }

    for(int i = 0; i < primes.size(); i++) {
        cout << primes[i] << "\n";
    }



    return 0;
}