// Compared to an array, a linked list features easier addition and removal
// of elements but is slower to sort. This raises a possibility: Perhaps it
// might be faster to copy a list to an array, sort the array, and copy the
// sorted result back to the list than to simply use the list algorithm for
// sorting. (But it also could use more memory.) Test the speed hypothesis
// with the following approach:
// a. Create a large vector<int> object vi0, using rand() to provide initial
//    values.
// b. Create a second vector<int> object vi and a list<int> object li of the
//    same size as the original and initialize them to values in the
//    original vector.
// c. Time how long the program takes to sort vi using the STL sort()
//    algorithm, then time how long it takes to sort li using the list
//    sort() method.
// d. Reset li to the unsorted contents of vi0. Time the combined operation
//    of copying li to vi, sorting vi, and copying the result back to li.
// To time this operations, you can use clock() from the ctime library. As
// in Listing 5.14, you can use this statement to start the first timing:
// clock_t start = clock();
// Then use the following at the end of the operation to get the elapsed
// time:
// clock_t end = clock();
// cout << (double)(end - start)/CLOCKS_PER_SEC;
// This is by no means a definitive test because the results will depend on
// a variaty of factors, including available memory, whether multiprocessing
// is going on, and the size of array or list. (One would expect the
// relative efficiency advantage of the array over the list to increase with
// the number of elements being sorted.) Also if you have a choice between a
// default build and a release build, use the release build for the
// mesurement. With today's speedy computers, you probably will need to use
// as large an array as possible to get meaningful readings. You might try,
// for example, 100,000 elements, 1,000,000 elements, and 10,000,000
// elements.
#include <iostream>
#include <vector>
#include <cstdlib>
#include <list>
#include <algorithm>
#include <ctime>
const unsigned long NUM = 1000000UL;
int main()
{
    using namespace std;

    // a
    cout << "Initializing a large vector..." << flush;
    srand(time(0));
    vector<int> vi0(NUM);
    for (unsigned long i = 0UL; i < NUM; i++)
        vi0.at(i) = rand();
    cout << "done.\n";
    
    // b
    cout << "Initializing another vector and a list..." << flush;
    vector<int> vi(vi0);    // use a copy constructor
    list<int> li(vi0.begin(), vi0.end());
    cout << "done.\n";

    // c
    cout << "Sorting a vector, please wait..." << flush;
    clock_t start = clock();
    sort(vi.begin(), vi.end());
    clock_t end = clock();
    cout << "done.\n";
    cout << "Time: " << (double)(end - start)/CLOCKS_PER_SEC << " s.\n";

    cout << "Sorting a list, please wait..." << flush;
    start = clock();
    li.sort();
    end = clock();
    cout << "done.\n";
    cout << "Time: " << (double)(end - start)/CLOCKS_PER_SEC << " s.\n";

    // d
    cout << "Reset the list..." << flush;
    copy(vi0.begin(), vi0.end(), li.begin());
    cout << "done.\n";
    cout << "Copying, sorting, and copying back, please wait..." << flush;
    start = clock();
    copy(li.begin(), li.end(), vi.begin());
    sort(vi.begin(), vi.end());
    copy(vi.begin(), vi.end(), li.begin());
    end = clock();
    cout << "done.\n";
    cout << "Time: " << (double)(end - start)/CLOCKS_PER_SEC << " s.\n";

    return 0;
}
