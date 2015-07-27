#include <stdexcept>

// base class
class bad_mean : public std::logic_error
{
    private:
        double v1;
        double v2;
    public:
        bad_mean(double a, double b,
                const std::string & s = "Invalid arguments\n");
        double v1_val() const { return v1; }
        double v2_val() const { return v2; }
        virtual void report_bad() = 0;
        virtual ~bad_mean() throw() { }
};

class bad_hmean : public bad_mean
{
    public:
        bad_hmean(double a, double b);
        virtual void report_bad();
        virtual ~bad_hmean() throw(){}
};

class bad_gmean : public bad_mean
{
    public:
        bad_gmean(double a, double b);
        virtual void report_bad();
        virtual ~bad_gmean() throw(){}
};
