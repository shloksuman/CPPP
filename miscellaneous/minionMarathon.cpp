#include<iostream>
using namespace std;

int main(){

return 0;
}

/* Minion Marathon

Bubu the minion participated in this year’s international marathon championships. The marathon consists of K races ran on a Track of L meters. The track can be considered as a line on the x-axis with one end at x=1, and another end at x=L. Then minion first runs from x=1 to x=L, then from x=L to x=1, and so on runs along the track K times.


The minion has a stamina of B calories and can store maximum energy of B calories in itself. To run one meter the minion spends 1 calorie of energy. Initially, the minion is at its full stamina(i.e has B calories of energy).


Now there is a food stall at x=S, where the minion can eat and regain its full stamina(i.e. B calories of energy). You have to tell the minimum number of times the minion has to eat at the stall to complete K races.


Input Format
First-line contains four space-separated integers denoting L, B, S, and K.

 


Output Format
Print the minimum number of times the minion has to eat at the stall to complete K races.

If it is impossible to complete the journey print -1.


Constraints


1<L<=10^6

 


1<=B<=10^9

 


1<S<L

 


1<=K<=10^4

 


Sample Input 1


7 10 3 4

 


Sample Output 1
2

 


Explanation of Sample 1

Here the minion can run 10 meters without eating. So it completes the first race and reaches x=7 with 4 calories of energy. Then it runs 4 meters of the second race and arrives at the food stall(x=3). It eats to its maximum capacity and has the energy of 10 calories. It then runs 2 meters more to complete the second race. Then it runs 2 meters of the third race and again arrives at the food stall. It again eats to regain maximum stamina(10 calories). Then it runs 4 meters more to complete the third race and has an energy of 6 calories. It uses all these calories to complete the fourth race.
*/
