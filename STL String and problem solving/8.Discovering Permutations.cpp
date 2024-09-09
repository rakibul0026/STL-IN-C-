
/*In this problem you have to find the permutations using the first N English capital letters. Since there can be many permutations,
you have to print the first K.

Input
Input starts with an integer T (≤ 100), denoting the number of test cases.

Each case contains two integers N, K (1 ≤ N ≤ 26, 1 ≤ K ≤ 30).

Output
For each case, print the case number in a line. Then print the first K permutations that contain the first N English capital letters in
alphabetical order. If there are less than K permutations then print all of them.

Sample
Input
2
3 8
10 10

Output
Case 1:
ABC
ACB
BAC
BCA
CAB
CBA
Case 2:
ABCDEFGHIJ
ABCDEFGHJI
ABCDEFGIHJ
ABCDEFGIJH
ABCDEFGJHI
ABCDEFGJIH
ABCDEFHGIJ
ABCDEFHGJI
ABCDEFHIGJ
ABCDEFHIJG

  */

#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int T;
    cin >> T;
    
    for (int t = 1; t <= T; ++t) {
        int N, K;
        cin >> N >> K;
        
        string s = "";
        for (int i = 0; i < N; ++i) {
            s += 'A' + i;  // Create the string of first N letters
        }
        
        cout << "Case " << t << ":\n";
        
        int count = 0;
        do {
            cout << s << endl;
            count++;
            if (count == K) break;  // Stop after printing K permutations
        } while (next_permutation(s.begin(), s.end()));
    }
    
    return 0;
}



