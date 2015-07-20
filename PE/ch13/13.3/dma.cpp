#include "dma.h"
#include <cstring>
using namespace std;

// ABC DMA methods
DMA::DMA(const char * l, int r)
{
    label = new char[strlen(l) + 1];
    strcpy(label, l);
    rating = r;
}

DMA::DMA(const DMA & rs)
{
    label = new char[strlen(rs.label) + 1];
    strcpy(label, rs.label);
    rating = rs.rating;
}

DMA::~DMA()
{
    delete [] label;
}

DMA & DMA::operator=(const DMA & rs)
{
    if (this == &rs)
        return *this;
    delete [] label;
    label = new char[strlen(rs.label) + 1];
    strcpy(label, rs.label);
    rating = rs.rating;
}

void DMA::View()
{
    cout << "Label: " << label << endl;
    cout << "Rating: " << rating << endl;
}


// baseDMA methods
baseDMA & baseDMA::operator=(const baseDMA & rs)
{
    DMA::operator=(rs);
}

void baseDMA::View()
{
    DMA::View();
}


// lacksDMA methods
lacksDMA::lacksDMA(const char * c, const char * l, int r)
        : DMA(l,r)
{
    strncpy(color, c, 39);
    color[39] = '\0';
}

lacksDMA::lacksDMA(const char * c, const baseDMA & rs)
        : DMA(rs)
{
    strncpy(color, c, COL_LEN - 1);
    color[COL_LEN - 1] = '\0';
}

void lacksDMA::View()
{
    DMA::View();
    cout << "Color: " << color << endl;
}


// hasDMA methods
hasDMA::hasDMA(const char * s, const char * l, int r)
            : DMA(l, r)
{
    style = new char[strlen(s)+1];
    strcpy(style, s);
}

hasDMA::hasDMA(const char * s, const baseDMA & rs)
            : DMA(rs)
{
    style = new char[strlen(s)+1];
    strcpy(style, s);
}

hasDMA::hasDMA(const hasDMA & hs)
            : DMA(hs)
{
    style = new char[strlen(hs.style) + 1];
    strcpy(style, hs.style);
}

hasDMA::~hasDMA()
{
    delete [] style;
}

hasDMA & hasDMA::operator=(const hasDMA & hs)
{
    if (this == &hs)
        return *this;
    DMA::operator=(hs);
    delete [] style;
    style = new char[strlen(hs.style) + 1];
    strcpy(style, hs.style);
    return *this;
}

void hasDMA::View()
{
    DMA::View();
    cout << "Style: " << style << endl;
}
