/*
A positive integer N is given as input.

Convert N into its binary representation and toggle
(all 0s become 1s and all 1s become 0s) every bit,
including the Most Significant Bit (MSB).

Print the decimal value obtained after toggling all bits.

Example:

Input:
10

Binary Representation:
1010

After Toggling:
0101

Decimal Value:
5

Output:
5

Approach:

1. Find the number of bits in N.
2. Create a mask having all bits set to 1 for the same
   number of bits as N.

   Example:
   N = 10 (1010)
   Number of bits = 4
   Mask = 1111

3. Toggle all bits using XOR:
      Result = N ^ Mask

4. Print Result.

Time Complexity: O(log N)
Space Complexity: O(1)
*/

