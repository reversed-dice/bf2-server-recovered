// FUNCTION: BF2 0x7c2ca0
// BF2_FLAGS: -fno-strict-aliasing
#include <string>

namespace dice {
namespace hfe {
namespace io {

class ILexicon {
public:
    virtual void vfun();
};

struct Entry {
    Entry* next;
    std::string key;
    std::wstring wkey;
};

class Table {
public:
    Entry** slots;
    unsigned int count;

    ~Table()
    {
        for (unsigned int i = 0; i < count; ++i) {
            Entry* e = slots[i];
            while (e != 0) {
                Entry* nx = e->next;
                delete e;
                e = nx;
            }
            slots[i] = 0;
        }
        if (slots != 0) {
            operator delete[](slots);
        }
    }
};

class ExcelLexicon : public ILexicon {
public:
    char _pad[8];
    std::wstring m_name;
    Table m_table;

    virtual ~ExcelLexicon();
};

ExcelLexicon::~ExcelLexicon()
{
    *(void**)this = (void*)0xbaa0b0;
}

} } }
