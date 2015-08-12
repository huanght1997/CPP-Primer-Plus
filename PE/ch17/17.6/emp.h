// emp.h -- header file for abstr_emp class and children
// NOTE: This is an altered version of emp.h in PE14.5.
#ifndef EMP_H_
#define EMP_H_
#include <iostream>
#include <string>
enum classkind {Employee, Manager, Fink, Highfink};
class abstr_emp
{
    private:
        std::string fname;  // abstr_emp's first name
        std::string lname;  // abstr_emp's last name
        std::string job;
    public:
        abstr_emp();
        abstr_emp(const std::string & fn, const std::string & ln,
                const std::string & j);
        virtual void showall() const;   // labels and shows all data
        virtual void setall();          // promote user for values
        virtual void writeall(std::ostream & os) const;// write data to file
        virtual void getall(std::istream & is);          // get data from file
        friend std::ostream &
                operator<<(std::ostream & os, const abstr_emp & e);
        // just displays first and last name
        virtual ~abstr_emp() = 0;       // virtual base class
};

class employee : virtual public abstr_emp
{
    public:
        employee();
        employee(const std::string & fn, const std::string & ln,
                 const std::string & j);
        virtual void showall() const;
        virtual void setall();
        virtual void writeall(std::ostream & os) const;
        virtual void getall(std::istream & is);
};

class manager: virtual public employee
{
    private:
        int inchargeof;     // number of employees managed
    protected:
        int InChargeOf() const { return inchargeof; }   // output
        int & InChargeOf(){ return inchargeof; }        // input
    public:
        manager();
        manager(const std::string & fn, const std::string & ln,
                const std::string & j, int ico = 0);
        manager(const employee & e, int ico);
        manager(const manager & m);
        virtual void showall() const;
        virtual void setall();
        virtual void writeall(std::ostream & os) const;
        virtual void getall(std::istream & is);
};

class fink: virtual public employee
{
    private:
        std::string reportsto;      // to whom fink reports
    protected:
        const std::string ReportsTo() const { return reportsto; }
        std::string & ReportsTo(){ return reportsto; }
    public:
        fink();
        fink(const std::string & fn, const std::string & ln,
             const std::string & j, const std::string & rpo);
        fink(const employee & e, const std::string & rpo);
        fink(const fink & e);
        virtual void showall() const;
        virtual void setall();
        virtual void writeall(std::ostream & os) const;
        virtual void getall(std::istream & is);
};

class highfink: public manager, public fink // management fink
{
    public:
        highfink();
        highfink(const std::string & fn, const std::string & ln,
                 const std::string & j, const std::string & rpo,
                 int ico);
        highfink(const employee & e, const std::string & rpo, int ico);
        highfink(const fink & f, int ico);
        highfink(const manager & m, const std::string & rpo);
        highfink(const highfink & h);
        virtual void showall() const;
        virtual void setall();
        virtual void writeall(std::ostream & os) const;
        virtual void getall(std::istream & is);
};

#endif
