// Modify Listing 16.9 (vect3.cpp) as follows:
// a. Add a price member to the Review structure.
// b. Instead of using a vector of Review objects to hold the input, use a
//    vector of shared_ptr<Review> objects. Remember that a shared_ptr has
//    to be initialized with a pointer returned by new.
// c. Follow the input stage with a loop that allows the user the following
//    options for displaying books: in original order, in alphabetical
//    order, in order of increasing ratings, in order of decreasing ratings,
//    in order of increasing price, in order of decreasing price, and
//    quitting.
// Here's one possible approach. After getting the initial input, create
// another vector of shared_ptrs initialized to the original array. Define
// an operator<() function that compares pointed-to structures and use it to
// sort the second vector so that the shared_ptrs are in the order of the
// book names stored in the pointed-to objects. Repeat the process to get
// vectors of shared_ptrs sorted by rating and by price. Note that rbegin()
// and rend() save you the trouble of also creating vectors of reversed
// order.
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <memory>

struct Review {
    std::string title;
    int rating;
    double price;
};

bool operator<(const std::shared_ptr<Review> & pr1,
               const std::shared_ptr<Review> & pr2);
bool worseThan(const std::shared_ptr<Review> & pr1,
               const std::shared_ptr<Review> & pr2);
bool cheaperThan(const std::shared_ptr<Review> & pr1,
                 const std::shared_ptr<Review> & pr2); 
bool FillReview(Review & rr);
void ShowReview(const std::shared_ptr<Review> & pr);
using namespace std;
int main()
{
    vector<shared_ptr<Review> > books;
    Review temp;
    while (FillReview(temp))
        books.push_back(shared_ptr<Review> (new Review(temp)));
    if (books.size() > 0)
    {
        vector<shared_ptr<Review> > aorder(books);
        sort(aorder.begin(), aorder.end());
        vector<shared_ptr<Review> > rorder(books);
        sort(rorder.begin(), rorder.end(), worseThan);
        vector<shared_ptr<Review> > porder(books);
        sort(porder.begin(), porder.end(), cheaperThan);
        cout << "Thank you. ";
        while (1)
        {
            cout << "You'd like to display them:\n";
            cout << "a) in original order     b) in alphabetical order\n";
            cout << "c) in order of increasing ratings\n";
            cout << "d) in order of decreasing ratings\n";
            cout << "e) in order of increasing price\n";
            cout << "f) in order of decreasing price\n";
            cout << "q) quit\n";
            cout << "Your choice: ";
            char choice;
            cin >> choice;
            while (cin.get() != '\n')
                continue;
            if (choice == 'q' || choice == 'Q')
                break;
            switch (choice)
            {
                case 'A':
                case 'a':
                    cout << "Rating\tPrice\tBook\n";
                    for_each(books.begin(), books.end(), ShowReview);
                    break;
                case 'B':
                case 'b':
                    cout << "Rating\tPrice\tBook\n";
                    for_each(aorder.begin(), aorder.end(), ShowReview);
                    break;
                case 'C':
                case 'c':
                    cout << "Rating\tPrice\tBook\n";
                    for_each(rorder.begin(), rorder.end(), ShowReview);
                    break;
                case 'D':
                case 'd':
                    cout << "Rating\tPrice\tBook\n";
                    for_each(rorder.rbegin(), rorder.rend(), ShowReview);
                    break;
                case 'E':
                case 'e':
                    cout << "Rating\tPrice\tBook\n";
                    for_each(porder.begin(), porder.end(), ShowReview);
                    break;
                case 'F':
                case 'f':
                    cout << "Rating\tPrice\tBook\n";
                    for_each(porder.rbegin(), porder.rend(), ShowReview);
                    break;
                default:
                    cout << "Invalid choice.\n";
                    continue;
            }   // end switch
        }   // end while
    }   // end if
    else
        cout << "No entries. ";
    cout << "Bye.\n";
    return 0;
}

bool operator<(const shared_ptr<Review> & pr1, const shared_ptr<Review> & pr2)
{
    if (pr1->title < pr2->title)
        return true;
    else if (pr1->title == pr2->title)
    {
        if (pr1->rating < pr2->rating)
            return true;
        else if (pr1->rating == pr2->rating && pr1->price < pr2->price)
            return true;
        else
            return false;
    }
    else
        return false;
}

bool worseThan(const shared_ptr<Review> & pr1, const shared_ptr<Review> & pr2)
{
    if (pr1->rating < pr2->rating)
        return true;
    else
        return false;
}

bool cheaperThan(const shared_ptr<Review> & pr1, const shared_ptr<Review> & pr2)
{
    if (pr1->price < pr2->price)
        return true;
    else
        return false;
}

bool FillReview(Review & rr)
{
    cout << "Enter book title (quit to quit): ";
    getline(cin, rr.title);
    if (rr.title == "quit")
        return false;
    cout << "Enter book rating: ";
    cin >> rr.rating;
    if (!cin)
        return false;
    cout << "Enter book price: ";
    cin >> rr.price;
    if (!cin)
        return false;
    // get rid of rest of input line
    while (cin.get() != '\n')
        continue;
    return true;
}

void ShowReview(const shared_ptr<Review> & pr)
{
    cout << pr->rating << "\t";
    cout.setf(ios_base::fixed, ios_base::floatfield);
    cout.precision(2);
    cout << pr->price << "\t";
    cout << pr->title << endl;
}
