# ALGO_B06
The elections have just ended in Byteotia. Billions of Byteotians are in suspense waiting for the TVs for the results, crowds of journalists, like vultures, whirl before entering the Bytechnical Central Election Commission. But wait a minute, could we have a small failure in the information system?

The allocation of credentials to the Bytthian Parliament takes place according to the method proposed by Victor d'Hondt. The method consists in finding the largest, consecutive, quotient of the number of votes obtained. The division is made by dividing the number of votes assigned to each party by successive natural numbers, and then from the quotients calculated for all parties, the number of seats to be filled is elected.

If several batches obtained the same quotients (for different divisors), the parties that obtained the higher number of votes shall have priority. Among the parties with an equal number of votes, priority is given to committees registered earlier (with a lower number of the list).

Entrance
The first line of the input contains the number of data sets. Then sets are given in the following order:

The first line contains two integers 𝑛 and 𝑚 (1⩽𝑛⩽2000, 0⩽𝑚⩽106) - the number of election committees and the number of seats to be dealt. The next 𝑛 lines contain one total non-negative number, not exceeding 109. These are the number of votes cast for successive election committees.

Exit
For each data set, write 𝑛 lines containing integers - the number of seats that will be given to the parties, in the order as they appeared at the entrance.

Example
For input data: 
1
4 12
14
15
12
7
The correct answer is:
4
4
3
1
