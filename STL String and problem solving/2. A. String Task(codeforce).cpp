/*                                                                    A. String Task
                                                              time limit per test2 seconds
                                                           memory limit per test256 megabytes
Petya started to attend programming lessons. On the first lesson his task was to write a simple program. The program was supposed to do 
the following: in the given string, consisting if uppercase and lowercase Latin letters, it:

deletes all the vowels,
inserts a character "." before each consonant,
replaces all uppercase consonants with corresponding lowercase ones.
Vowels are letters "A", "O", "Y", "E", "U", "I", and the rest are consonants. The program's input is exactly one string, it should return
the output as a single string, resulting after the program's processing the initial string.

Help Petya cope with this easy task.

Input
The first line represents input string of Petya's program. This string only consists of uppercase and lowercase Latin letters and its length is
from 1 to 100, inclusive.

Output
Print the resulting string. It is guaranteed that this string is not empty.

Examples
Input
tour
OutputC
.t.r

Input
Codeforces
Output
.c.d.f.r.c.s

Input
aBAcAba
Output
.b.c.b
*/
/// In the name of ALLAH

#include<bits/stdc++.h>
using namespace std;


#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

bool isVowel ( char c )
{
    return ( c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'y'  );
}

int main()
{
    optimize();

    string s, ans;

    cin >> s;

    for ( auto u : s ) {
        char c = tolower ( u );

        if ( isVowel ( c ) == 0 ) {
            ans += '.';
            ans += c;
        }
    }

    cout << ans << endl;

}
