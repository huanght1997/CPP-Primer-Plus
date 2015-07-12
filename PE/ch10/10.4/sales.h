#ifndef SALES_H_
#define SALES_H_
namespace SALES
{
    class Sales
    {
        private:
            static const int QUATERS = 4;
            double sales[QUATERS];
            double average;
            double max;
            double min;
        public:
            Sales();
            Sales(const double ar[], int n);
            void setSales();
            void showSales() const;
    };
}
#endif
