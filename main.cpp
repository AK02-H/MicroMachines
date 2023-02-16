#include <SFML/Graphics.hpp>
#include <SFML/Network.hpp>

#include <cmath>
#include <iostream>
#include <thread>

using namespace sf;

class Networking {
    public:
        Networking();
        void runServer();
    private:
        TcpSocket socket;
};


class Printer
{
    public:

        void print()
        {
            std::cout<< "swear word" << std::endl;
        }

};

void Test()
{
}

int main()
{
    Printer probject;

    std::thread t0(&Printer::print, &probject);

    // ....

    t0.join();
    //std::cout<< "swear word" << std::endl;
}
