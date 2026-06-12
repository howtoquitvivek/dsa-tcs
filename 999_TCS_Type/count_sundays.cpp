/*
Jack loves Sundays and wants to know how many Sundays
occur within N days starting from the first day of a month.

The month can start on any day:
sun, mon, tue, wed, thu, fri, sat

Given:
1. A string representing the starting day of the month.
2. An integer N representing the number of days from
   the start of the month.

Find the number of Sundays that occur within those N days.

Example:

Input:
mon
13

Output:
2

Explanation:
Month starts on Monday.

Day 1  -> Monday
Day 7  -> Sunday (1st Sunday)
Day 14 -> Sunday (2nd Sunday)

Since 13 days from the start includes days 1 to 13,
the two Sundays fall within the considered period.

Approach:

1. Convert the starting day into its index:
   sun=0, mon=1, tue=2, wed=3,
   thu=4, fri=5, sat=6

2. Find the number of days remaining until the first Sunday.

3. If the first Sunday occurs after N days,
   answer is 0.

4. Otherwise:
      Count first Sunday.
      Every additional 7 days gives another Sunday.

5. Print total count.

Time Complexity: O(1)
Space Complexity: O(1)
*/