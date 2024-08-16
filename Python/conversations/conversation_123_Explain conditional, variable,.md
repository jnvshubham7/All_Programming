## USER
Explain conditional, variable, and semaphore for thread synchronization. With example.

## ASSISTANT
Certainly! In multithreaded programming, synchronization mechanisms such as condition variables, variables, and semaphores are used to coordinate the execution of threads and prevent race conditions. Let's explain each of these synchronization primitives with examples:

1. **Conditional Variables**:
   - Conditional variables are synchronization primitives that allow threads to wait until a certain condition is met before proceeding.
   - They are typically used in conjunction with mutexes to ensure mutual exclusion and avoid race conditions.
   - Threads can wait on a condition variable until another thread signals or broadcasts that the condition has been met.
   - Example:

    ```cpp
    #include <iostream>
    #include <thread>
    #include <mutex>
    #include <condition_variable>

    std::mutex mtx;
    std::condition_variable cv;
    bool ready = false;

    void print_id(int id) {
        std::unique_lock<std::mutex> lck(mtx);
        while (!ready) {
            cv.wait(lck);
        }
        std::cout << "Thread " << id << " is executing\n";
    }

    void go() {
        std::unique_lock<std::mutex> lck(mtx);
        ready = true;
        cv.notify_all();
    }

    int main() {
        std::thread threads[5];
        for (int i = 0; i < 5; ++i) {
            threads[i] = std::thread(print_id, i + 1);
        }
        std::cout << "Threads are ready to execute...\n";
        go();
        for (auto& th : threads) {
            th.join();
        }
        return 0;
    }
    ```

2. **Mutex Variables**:
   - Mutex variables (short for mutual exclusion) are used to protect shared resources by allowing only one thread to access them at a time.
   - Threads attempt to acquire the mutex lock before accessing the critical section, ensuring exclusive access.
   - Example:

    ```cpp
    #include <iostream>
    #include <thread>
    #include <mutex>

    std::mutex mtx;

    void critical_section() {
        mtx.lock();
        std::cout << "Thread " << std::this_thread::get_id() << " is in the critical section\n";
        mtx.unlock();
    }

    int main() {
        std::thread t1(critical_section);
        std::thread t2(critical_section);
        t1.join();
        t2.join();
        return 0;
    }
    ```

3. **Semaphores**:
   - Semaphores are synchronization primitives that control access to a shared resource by maintaining a count of available resources.
   - They can be used to limit the number of threads accessing a critical section simultaneously.
   - Example:

    ```cpp
    #include <iostream>
    #include <thread>
    #include <mutex>
    #include <condition_variable>

    class Semaphore {
    private:
        int count;
        std::mutex mtx;
        std::condition_variable cv;
    public:
        Semaphore(int initial_count) : count(initial_count) {}

        void wait() {
            std::unique_lock<std::mutex> lock(mtx);
            while (count == 0) {
                cv.wait(lock);
            }
            count--;
        }

        void signal() {
            std::unique_lock<std::mutex> lock(mtx);
            count++;
            cv.notify_one();
        }
    };

    Semaphore sem(1);

    void critical_section(int id) {
        sem.wait();
        std::cout << "Thread " << id << " is in the critical section\n";
        sem.signal();
    }

    int main() {
        std::thread t1(critical_section, 1);
        std::thread t2(critical_section, 2);
        t1.join();
        t2.join();
        return 0;
    }
    ```

These examples demonstrate how conditional variables, mutex variables, and semaphores can be used for thread synchronization in multithreaded programs. Each synchronization primitive offers different features and advantages, depending on the specific requirements of the application.