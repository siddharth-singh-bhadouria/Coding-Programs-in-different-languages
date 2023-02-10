/*


Classical problem synchronization :-
1. Bounded buffer
2. Reader-writer problem
3. Dining philosopher problem


Simaphores -
Significant techniques to manage a concurrent process by using a simple integer value known as Simaphores.
It is simply an integer value or variable that is shared between threads.
This variable is used to solve a critical section problem and to achieve the process synchronization in multiprocessing environment.
2 types:
1. Binary Simaphores : can have only 2 values 0 and 1 . Its value is initialized to 1 . It is used to implement the process of critical section problem with multiple processes.
2. Counting Simaphores : Its value can range over an unrestricted domain . Used to control access to a resource that has multiple instances .

Here atomic means the variable on which read, modify and update happen at the same time with no preemption .

Limitations :
One of the biggest limitation of Simaphores is priority

*/
