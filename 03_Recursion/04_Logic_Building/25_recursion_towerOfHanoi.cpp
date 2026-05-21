/*
========================================================
                TOWER OF HANOI
========================================================

Problem Statement:

Given n disks of different sizes stacked on a
source rod in increasing order of size
(largest at bottom, smallest at top),

move all disks from the source rod to the
destination rod using an auxiliary rod.

You must follow these rules:

1. Only one disk can be moved at a time.
2. A larger disk can never be placed on top
   of a smaller disk.
3. Every move must transfer the top disk
   from one rod to another rod.

Print all moves required to transfer the
entire stack from source to destination.

========================================================
                EXAMPLES
========================================================

Input:

n = 1

Output:

Move disk 1 from A to C

--------------------------------------------------------

Input:

n = 2

Output:

Move disk 1 from A to B
Move disk 2 from A to C
Move disk 1 from B to C

--------------------------------------------------------

Input:

n = 3

Output:

Move disk 1 from A to C
Move disk 2 from A to B
Move disk 1 from C to B
Move disk 3 from A to C
Move disk 1 from B to A
Move disk 2 from B to C
Move disk 1 from A to C

========================================================
                VISUALIZATION
========================================================

Initial:

Rod A         Rod B         Rod C

  1
  2
  3

Goal:

Rod A         Rod B         Rod C

                          1
                          2
                          3

========================================================
                CONSTRAINTS
========================================================

1 <= n <= 20

========================================================
                TRY SOLVING
========================================================

1. Recursive Approach

Think:

To move n disks from A to C:

Step 1:
Move top (n-1) disks from A to B

Step 2:
Move largest disk from A to C

Step 3:
Move (n-1) disks from B to C

========================================================
                EXPECTED COMPLEXITIES
========================================================

Time Complexity:

O(2^n)

Space Complexity:

O(n)

(recursion stack)

========================================================
*/

#include<iostream>
using namespace std;

// Not using stack data structure for rods because we are not simulating the movement of the rods
// We just need to track and print disc movement

void towerofHanoi(int n, char source, char aux, char destination){

   if(n == 1){cout<<"Move disc "<<n<<" from "<<source<<" to "<<destination<<endl; return;}

   towerofHanoi(n-1, source, destination, aux);
   cout<<"Move disc "<<n<<" from "<<source<<" to "<<destination<<endl;
   towerofHanoi(n-1, aux, source, destination);
}

// Time is 2^n
// Space is n

// Actual moves = 2^n - 1
// So for n=3, Moves = 7

int main(){

    towerofHanoi(3,'A','B','C');
    
    return 0;
}