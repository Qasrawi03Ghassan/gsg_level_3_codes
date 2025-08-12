Problem statement: Given a number of days n (1 ≤ n ≤ 10), print all possible sequences of daily activities using the set: {"Swimming", "Running", "Football"} subject to the constraint that no two consecutive days have the same activity.  
Input: A single integer n (1 ≤ n ≤ 10).  
Output: Print each valid schedule on its own line, with activities separated by a single space and after listing all schedules, print a final line: COUNT: X where X is the total number of schedules
generated.  
-------------------------------------------------------------------------------------------------------------------  
Example:-  
input: 2  
Output: 
Football Running  
Football Swimming  
Running Football  
Running Swimming  
Swimming Football  
Swimming Running  
COUNT: 6  
-------------------------------------------------------------------------------------------------------------------  
Count formula: 3 * (2) ^ ( n - 1)  
take 2 as example: 3 * (2) ^ (2 - 1) = 6  
-------------------------------------------------------------------------------------------------------------------  
Hints: This is a recursion problem and at each day, try the 3 activities but skip the one equal to the previous day's choice.  
-------------------------------------------------------------------------------------------------------------------  
Name: Ghassan Majed Ghassan Qasrawi  
Email: qasrawi.ghassan03@gmail.com  


