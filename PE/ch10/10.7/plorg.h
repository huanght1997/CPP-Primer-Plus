#ifndef PLORG_H_
#define PLORG_H_
class Plorg
{
    private:
        char name[20];
        int ci;
    public:
        Plorg(const char * star_name="Plorga");
        void setCI(int star_ci);
        void report() const;
};
#endif
