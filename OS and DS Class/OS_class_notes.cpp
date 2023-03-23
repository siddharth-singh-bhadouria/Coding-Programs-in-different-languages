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
1. Deadlock prevention - Design such a system which violates atleast 1 of the 4 necessary conditions of deadlock and ensure independence from deadlock .
2. Deadlock avoidance (Banker's Algo) - System maintains a set of data using which it takes a decision whether to entertain a new request or not to be in saved state. System maintains some database . System (kernel) analyse the data base to determine whether granting our request can lead to deadlock in future . If does not lead to deadlock then granting otherwise keep pending until they can be granted .
3. Detection and recovery - Process may face long delay for obtaining a resource . here we wait until deadlock occurs and once we detect it then we recover from it.
4. Deadlock ignorance (ostrich approach) - Ignore the problem as if it does not exist .

1.Deadlock Prevention :
Elimination of mutual exclusion condition : The mutual exclusion condition must hold for non-shareable resources . This condition is difficult to eliminate because some resources such as hard-disk and printer inherently non-shareable . Note that shareable resources like read-only file do not require mutually exclusive access and therefore cannot be involved indirectly .

Elimination of Hold and Wait : There are possibilities to eliminate this condition . The 1st is that the process request be granted all of the resources it needs at once prior to execution . The 2nd is that to disallow a process from requesting resources whenever it has previously allocated resources .

Elimination of No preemption : When a process holding some resources is denied a request for additional resources the process must release its held resources and if necessary request them again together with additional resources .

Elimination of Circular Wait : The circular wait can be denied by imposing a total ordering on all the resource types and then forcing all processes to request the resources in order .

2.Deadlock avoidance (Banker's Algo) :
this approach of the deadlock problem anticipates ....
It dynamically examines to ensure that the circular wait .

Safe State : if there is a safe execution sequence .
An execution sequence is an ordering for process execution such that eac hprocess runs until it terminates and all requests for resources are immediately granted if the resource are available.
An unsaved state may not be deadlocked but there is atleast once sequence of processes that would make the system deadlocked .

Deadlock avoidance (Banker's Algo) uses a variance of resource allocation graph to avoid deadlock state .
Clamp Edge

Suppose that the process Pi request Rj that th process can be granted only if converting he request edge to an assignment edge does not result in the formation of a cycle .

Banker's Algorithm :
1) Let Work and Finish be vectors of length ‘m’ and ‘n’ respectively.
Initialize: Work = Available
Finish[i] = false; for i=1, 2, 3, 4….n
2) Find an i such that both
a) Finish[i] = false
b) Needi <= Work
if no such i exists goto step (4)
3) Work = Work + Allocation[i]
Finish[i] = true
goto step (2)
4) if Finish [i] = true for all i
then the system is in a safe state otherwise unsafe

* Safe sequence can be more than one.

Banker's algo is used to handle multiple instances of same resource .

How many process and instances can Max request ?

How many instances of each resource can each process hold ?

How many instances of each resource is available in the system ?

Banker's Algo :

1. Start the program.
2. Declare the memory for the process.
3. Read the process,resources, allocatioin matrix and available matrix .
4. calc the need matrix,i.e. need = max-allocation
5. Compare each and every process
6. if process is in save then it is not a deadlock process .
7. produce the result of the state of the process.
8. stop the program.


Deadlock detection and recovery :
1. Single Instance ( Wait for graph ) -
2. Multiple Instance ( Banker's Algo ) -

* Allow the system to enter into deadlocked state .

Wait for graph- A wait for graph can be drawn by removing nodes of type resource and collapsing the appropriate ages from the resource allocation graph .

An edge from Pi to Pj in a Wait for graph implies that process Pi is waiting for process Pj to release a resource that needs Pi . An edge Pi to Pj exists in a Wait for graph if and only if the corresponding resource allocation graph contains 2 edges for some resource Rq .

A deadlock exists in a system if and only if the Wait for graph contains a cycle . To detect the deadlock the system needs to maintain Wait for graph and periodically invoke an algo that searches for a cycle in the graph .

Deadlock Recovery :
1. Optimistic Approach - Preempts some resources from process and give these resouces to some other process until the deadlock cycle is dropped . Abort all deadlock process .
2. Pesimistic Approach - Abort one process at a time and decide next to abort .




Memory Management :

RM , PM , MM , FM , P&S

1. Static Partitioning
2. Dynamic Partitioning

Internal Fragmentation - It occurs when the space is left within the partition after allocationing the partition .This space is known as internally fragmented space . This space cannot be alloted to allcate the other processes . This internal fragmentation is done because only static partioning allows to store only 1 process in each partition .

It occurs when the total amount of empty space required to store the process is available in the main memory but the space is not contiguous so the process cannot be stored .


Translating logical address into physical address :
CPU always generates a logical address . A physical address is needed to address the MM .

The tranlating scheme uses 2 types of registers :
Step 1 : of the process in the main meomry limit is used to store adn sizw and
Step 2 : Cpu generates a logical add containing the add of instructions that it wants to read .
Step 3 : compares with limit of process

1) If the generated address is greater than or equal to the limit , a trap is generated . This helops to prevent an unauthorized access .

is the address of the Memory Location storing the required word .

Dynamic Partitioning : It performs the allocation diagonally .

Partition allocation algo - The processes arrive and leave

Popular P A are first , best and worst fit .

Partition allocation algo are used to decide which hole should be allocated to arriving process .

Worst algo is best and best algo is worst

Worst fit algo is best because space left after allocation inside the partition is of large size . This space might suit the requirement of arriving process .

Best fit algo is worst because space left after allocation inside the partition is of small size . There is a low probabiility that this space might suit the requirement of arriving process .

Different parts of the same process can be stored in diff places in the MM . There are 2 types of non-contiguous memory locations .



Paging :
It is a fixed size of partitioning scheme . In a paging secondary and main memory are divided into equal size of partitions . The partitions of SM are called pages and of MM are called frames . Each process is divided into parts . The pages of process are stored in the frame of MM depending upon their availability .

Following steps to translate logical to physical address :



Provide a mechanism for the enforcement of the policies governing

Protection is a mechanism to control access to the resources . Protection mechanism provides controlled access by limiting the type of access that various users can make .
Security is a major of confidence that the integrity of the system relies on .

Security Voilation Categories :
1. Breach of confidentiality -









*/
