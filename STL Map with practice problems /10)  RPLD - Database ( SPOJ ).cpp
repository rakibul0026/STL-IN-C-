/*                                      RPLD - Database   
Gaby enjoy working in a database of a very important university, this university has students of course, each student 
can see as many subjects they want, however, the database suffered an attack by a group of hackers, now, Gaby needs to
see the backup files, but then she noticed that some of the backup files are corrupted as well... For example, the backup
file can show that a student is seeing 2 same subjects, desperate, she needs help on this task.

It is known that several students (different ones) can see the same subject, however, one single student cannot see the
same subject (this would seem ridiculous), if one student sees the same subject two or more times, this test would belong
to a corrupted file.

Input
First line will contain an integer T, representing the cases to evaluate, the next T cases will start with a N and R, both
integers, denoting the number of students and the number of lines the database have, the next R lines contains two integers 
I and C, I stands for the ID of the students and C for the subject code.

Output
You will output T lines for each test case, starting with the string “Scenario #i: “ where i is the test case you're 
evaluating, then, you should output the string “impossible” if the database file on evaluation is corrupted and the string 
“possible” if its not.

Example
Input:
2
2 4
1 6102
1 6103
2 6102
2 6103

2 4
1 6102
1 6102
2 6102
2 6103

Output:
Scenario #1: possible
Scenario #2: impossible*/





#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    for (int tc = 1; tc <= t; tc++) // Run for exactly t test cases
    {
        int n, m;
        cin >> n >> m;

        map<pair<int, int>, bool> vis;

        bool done = true; // Reset for each test case
        while (m--)
        {
            int a, b;
            cin >> a >> b;

            if (vis[{a, b}]) // Check if the pair is already visited
                done = false;

            vis[{a, b}] = true; // Mark the pair as visited
        }

        if (done)
            cout << "Scenario #" << tc << ": possible" << endl;
        else
            cout << "Scenario #" << tc << ": impossible" << endl;
    }

    return 0;
}

