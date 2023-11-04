#include "student_file.h"
#include <iostream>
#include <vector>
using namespace std;
int main() {
    Jugadores A;
    vector<int> habilidades1 = {1, 2, 3};
    int N_1 = 2, K_1 = 2;
    //N°1
    vector<int> result1 = A.Torneo(habilidades1, N_1, K_1);
    cout << "{" << result1[0] << ", " << result1[1] << "}" << endl;
    vector<int> habilidades2 = {49, 24, 26, 12, 5, 33, 25, 30, 35, 41, 46, 23, 21, 3, 38, 43, 11, 19, 34, 29, 20, 32, 39, 7, 50};
    int N_2 = 10, K_2 = 399;
    vector<int> result2 = A.Torneo(habilidades2, N_2, K_2);
    //N°2
    cout << "{" << result2[0] << ", " << result2[1] << "}" << endl;
    vector<int> habilidades3 = {1, 2, 3};
    int N_3 = 2, K_3 = 4;
    //N°3
    vector<int> result3 = A.Torneo(habilidades3, N_3, K_3);
    cout << "{" << result3[0] << ", " << result3[1] << "}" << endl;
    vector<int> habilidades4 = {30, 12};
    int N_4 = 34, K_4 = 80;
    //N°4
    vector<int> result4 = A.Torneo(habilidades4, N_4, K_4);
    cout << "{" << result4[0] << ", " << result4[1] << "}" << endl;
    return 0;
}
