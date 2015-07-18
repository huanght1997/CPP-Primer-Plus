/*
 * The Bank of Heather would like to know what would happen if it added a
 * second ATM. Modify the simulation in this chapter so that it has two
 * queues. Assume that a customer will join the first queue if it has fewer
 * people in it than the second queue and that the customer will join the
 * second queue otherwise. Again, find a value for number of customers per
 * hour that leads to an average wait time of one minute. (Note:This is a
 * nonlinear problem in that doubling the number of ATMs doesn't double the
 * number of customers who can be handled per hour with a one-minute wait
 * maximum.)
 */
// bank.cpp -- using the Queue interface
// compile with queue.cpp
#include <iostream>
#include <cstdlib>  // for rand() and srand()
#include <ctime>    // for time()
#include "queue.h"
const int MIN_PER_HR = 60;

bool newcustomer(double x); // is there a new customer?

int main()
{
    using std::cin;
    using std::cout;
    using std::endl;
    using std::ios_base;
// setting things up
    std::srand(std::time(0));   // random initializing of rand()

    cout << "Case Study: Bank of Heather Automatic Teller\n";
    cout << "Enter maximum size of queue: ";
    int qs;
    cin >> qs;

    int hours = 120;        // hours of simulation
    // simulation will run 1 cycle per minute
    long cyclelimit = MIN_PER_HR * hours;   // # of cycles

    while (1)
    {
        Queue line1(qs);
        Queue line2(qs);
        cout << "Enter the average number of customers per hour: ";
        double perhour;         // average # of arrival per hour
        if(!(cin >> perhour)) break;
        double min_per_cust;    // average time between arrivals
        min_per_cust = MIN_PER_HR / perhour;

        Item temp;              // new customer data
        long turnaways = 0;     // turned away by full queue
        long customers = 0;     // joined the queue
        long served = 0;        // served during the simulation
        long sum_line = 0;      // cumulative line length
        int wait_time1 = 0;     // time until autoteller is free
        int wait_time2 = 0;
        long line_wait = 0;     // cumulative time in line

    // running the simulation
        for (int cycle = 0; cycle < cyclelimit; cycle++)
        {
            if (newcustomer(min_per_cust))  // have newcomer
            {
                if (line1.isfull() && line2.isfull())
                    turnaways++;
                else
                {
                    customers++;
                    temp.set(cycle);        // cycle = time of arrival
                    if (line1.queuecount() <= line2.queuecount())
                        line1.enqueue(temp);     // add newcomer to line
                    else
                        line2.enqueue(temp);
                }
            }
            if (wait_time1 <= 0 && !line1.isempty())
            {
                line1.dequeue(temp);         // attend next customer
                wait_time1 = temp.ptime();   // for wait_time minutes
                line_wait += cycle - temp.when();
                served++;
            }
            if (wait_time1 > 0)
                wait_time1--;
            sum_line += line1.queuecount();
            if (wait_time2 <= 0 && !line2.isempty())
            {
                line2.dequeue(temp);
                wait_time2 = temp.ptime();
                line_wait += cycle - temp.when();
                served++;
            }
            if (wait_time2 > 0)
                wait_time2--;
            sum_line += line2.queuecount();
        }

    // reporting results
        if (customers > 0)
        {
            double awt = (double) line_wait / served;
            cout << "customers accepted: " << customers << endl;
            cout << "  customers served: " << served << endl;
            cout << "         turnaways: " << turnaways << endl;
            cout << "average queue size: ";
            cout.precision(2);
            cout.setf(ios_base::fixed, ios_base::floatfield);
            cout << (double) sum_line / cyclelimit << endl;
            cout << " average wait time: " << awt << " minutes\n";
            if (awt >= 0.80 && awt <= 1.05)
            {
                cout << perhour << " is good.\n";
                break;
            }
        }
        else
            cout << "No customers!\n";
    }
    cout << "Done!\n";

    return 0;
}

// x = average time, in minutes, between customers
// return value is true if customer shows up this minute
bool newcustomer(double x)
{
    return (std::rand() * x / RAND_MAX < 1);
}
