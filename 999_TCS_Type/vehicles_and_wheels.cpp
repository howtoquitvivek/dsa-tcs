/*
Problem Statement:

An automobile company manufactures two-wheelers (TW)
and four-wheelers (FW).

Input:
V = Total number of vehicles
W = Total number of wheels

Output:
Find the number of two-wheelers (TW)
and four-wheelers (FW).

Equation Formation:

Let,
TW = Number of two-wheelers
FW = Number of four-wheelers

1) Total vehicles:
   TW + FW = V

2) Total wheels:
   2*TW + 4*FW = W

Solving:

From (1),
TW = V - FW

Substitute in (2):

2(V - FW) + 4FW = W
2V - 2FW + 4FW = W
2V + 2FW = W
2FW = W - 2V

FW = (W - 2V) / 2

Using (1),

TW = V - FW

Validation:
- Minimum wheels possible = 2*V
- Maximum wheels possible = 4*V
- W must be even

If (W < 2*V || W > 4*V || W%2 != 0)
    Invalid Input
*/

#include<iostream>
using namespace std;

int main(){

    int v;
    cin>>v;
    int w;
    cin>>w;

    if(w < 2*v || w > 4*v || w%2 != 0){
        cout<<"Invalid input.";
    }

    int fw = (w-2*v)/2;
    int tw = v - fw;

    cout<<fw<<" "<<tw<<endl;
    
}