#include <iostream>
#include <thread>
#include <unistd.h>

void thread_function()
{
    for (int i = 0; i < 5; i++)
    {
        sleep(1);
        std::cout << "thread function\n";
    }
}

int main()
{
    std::thread t(&thread_function);   // t starts running
//    std::cout << "main thread\n";
    for (int i = 0; i < 5; i++)
    {
        sleep(1);
        std::cout << "main\n";
    }
    t.join();   // main thread waits for the thread t to finish
//    t.detach();
    return 0;
}
