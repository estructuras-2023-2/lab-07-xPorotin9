#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> Torneo(vector<int> habilidades, int N, int K) {
    vector<int> result(2); 
    int consecutiveWins = 0; 
    int currentWinner = max(habilidades[0], habilidades[1]); 
    int currentLoser = min(habilidades[0], habilidades[1]); 

    for (int i = 0; i < K - 1; i++) {
        if (habilidades[i % habilidades.size()] == currentWinner) {
            consecutiveWins++;
        } else {
            consecutiveWins = 1;
        }
        if (habilidades[i % habilidades.size()] == currentLoser) {
            currentLoser = currentWinner;
            currentWinner = habilidades[(i + 1) % habilidades.size()];
        }

        if (consecutiveWins == N) {
            consecutiveWins = 0;
            currentLoser = currentWinner;
            currentWinner = habilidades[(i + 2) % habilidades.size()];
            i++;
        }
    }
    result[0] = currentLoser;
    result[1] = currentWinner;
    return result;
}

int main() {
    vector<int> result1 = Torneo({1, 2, 3}, 2, 2);
    cout << "{" << result1[0] << ", " << result1[1] << " }" << endl;
    vector<int> result2 = Torneo({49, 24, 26, 12, 5, 33, 25, 30, 35, 41, 46, 23, 21, 3, 38, 43, 11, 19, 34, 29, 20, 32, 39, 7, 50}, 10, 399);
    cout << "{" << result2[0] << ", " << result2[1] << " }" << endl;
    vector<int> result3 = Torneo({1, 2, 3}, 2, 4);
    cout << "{" << result3[0] << ", " << result3[1] << " }" << endl;
    vector<int> result4 = Torneo({30, 12}, 34, 80);
    cout << "{" << result4[0] << ", " << result4[1] << " }" << endl;
    return 0;
}
