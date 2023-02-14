/*


Classical problem synchronization :-
1. Bounded buffer
2. Reader-writer problem
3. Dining philosopher problem


Semaphores -
Significant techniques to manage a concurrent process by using a simple integer value known as Semaphores.
It is simply an integer value or variable that is shared between threads.
This variable is used to solve a critical section problem and to achieve the process synchronization in multiprocessing environment.
2 types:
1. Binary Semaphores : can have only 2 values 0 and 1 . Its value is initialized to 1 . It is used to implement the process of critical section problem with multiple processes.
2. Counting Semaphores : Its value can range over an unrestricted domain . Used to control access to a resource that has multiple instances .

Here atomic means the variable on which read, modify and update happen at the same time with no preemption .

Limitations :
One of the biggest limitation of Semaphores is priority .



Deadlock in OS :
waiting for something for infinite time in which there is no progress for waiting processes .
Processes wait for one another action indefinitely .
Eg.
When 2 trains approach each other at crossing both shall come to a stop and neither shall start up again until the other has gone .

Deadlock is a situation where a set of processes are blocked because each process is holding a resource and waiting for another resource which is acquired by some other processes .
There are 4 necessary conditions of deadlock :
1. Mutual Exclusion : The 2 processes cannot use the same resources at the same time.
2. Hold and Wait : A process waits for some resources by holding another resource at the same time.
3. No preemption : The process which once scheduled will be executed till the completion.
4. Circular Wait : All the processes must be waiting for the resource in a cyclic manner.

If there is no cycle in Resource Allocation Graph (RAG) then no deadlock in RAG.
If cycle is present in RAG then deadlock may or may not be present in RAG.


Deadlock preventing methods in OS :
1. Deadlock prevention
2. Deadlock avoidance
3. Detection and recovery
4. Deadlock ignorance (ostrich approach)






*/
