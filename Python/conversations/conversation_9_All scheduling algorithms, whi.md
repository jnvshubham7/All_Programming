## USER
All scheduling algorithms, which is non-primitive or primitive.

## ASSISTANT
Scheduling algorithms in operating systems can be classified into two broad categories: primitive (or non-preemptive) and non-primitive (or preemptive).

1. **Primitive (Non-preemptive) Scheduling Algorithms:**
   - **First-Come-First-Serve (FCFS):** Processes are executed in the order they arrive.
   - **Shortest Job Next (SJN) or Shortest Job First (SJF):** The process with the shortest burst time is scheduled first.
   - **Priority Scheduling:** Each process is assigned a priority, and the process with the highest priority is scheduled first.
   - **Round Robin (RR):** Each process gets a fixed time slice or quantum, and they are scheduled in a circular order.

2. **Non-primitive (Preemptive) Scheduling Algorithms:**
   - **Preemptive Priority Scheduling:** Similar to priority scheduling, but the priority can be reassigned during execution, allowing higher-priority processes to preempt lower-priority ones.
   - **Shortest Remaining Time First (SRTF):** A preemptive version of SJF, where the process with the shortest remaining burst time is scheduled.
   - **Round Robin with Time Quantum:** Similar to round robin, but processes can be preempted after a fixed time quantum.
   - **Multilevel Queue Scheduling:** Processes are divided into multiple queues based on priority, and each queue may have a different scheduling algorithm.

In summary, primitive scheduling algorithms are non-preemptive, meaning once a process starts executing, it continues until it finishes or enters a waiting state. On the other hand, non-primitive scheduling algorithms are preemptive, allowing the operating system to interrupt a currently running process and start or resume another. The choice between primitive and non-primitive algorithms depends on factors such as system requirements, fairness, and responsiveness.