/*
 * Revise the baseDMA-lacksDMA-hasDMA class hierarchy so that all three
 * classes are derived from an ABC. Test the result with a program similar
 * to the one in Listing 13.10. That is, it should feature an array of
 * pointers to the ABC and allow the user to make runtime decisions as to
 * what types of objects are created. Add virtual View() methods to the
 * class definitions to handle displaying the data.
 */
#ifndef DMA_H_
#define DMA_H_
#include <iostream>

// ABC
class DMA
{
    private:
        char * label;
        int rating;
    public:
        DMA(const char * l = "null", int r = 0);
        DMA(const DMA & rs);
        virtual ~DMA();
        DMA & operator=(const DMA & rs);
        virtual void View() = 0;
        friend std::ostream & operator<<(std::ostream & os,
                                         const DMA & rs);
};

// baseDMA
class baseDMA : public DMA
{
    public:
        baseDMA(const char * l = "null", int r = 0)
            : DMA(l, r) {};
        baseDMA(const DMA & rs) : DMA(rs){};
        baseDMA(const baseDMA & rs) : DMA(rs){};
        baseDMA & operator=(const baseDMA & rs);
        virtual void View();
        friend std::ostream & operator<<(std::ostream & os,
                                         const DMA & rs);
};

// lacksDMA
class lacksDMA : public DMA
{
    private:
        enum { COL_LEN = 40};
        char color[COL_LEN];
    public:
        lacksDMA(const char * c = "blank", const char * l = "null",
                  int r = 0);
        lacksDMA(const char * c, const baseDMA & rs);
        virtual void View();
        friend std::ostream & operator<<(std::ostream & os,
                                        const lacksDMA & rs);
};

// hasDMA
class hasDMA : public DMA
{
    private:
        char * style;
    public:
        hasDMA(const char * s = "none", const char * l = "null",
                int r = 0);
        hasDMA(const char * s, const baseDMA & rs);
        hasDMA(const hasDMA & hs);
        ~hasDMA();
        hasDMA & operator=(const hasDMA & rs);
        virtual void View();
        friend std::ostream & operator<<(std::ostream & os,
                                        const hasDMA & rs);
};
#endif
