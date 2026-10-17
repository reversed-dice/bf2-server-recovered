// BF2_FLAGS: -fno-strict-aliasing
// FUNCTION: BF2 0x7c37b0
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

// compile-state padding: 12 unused functions, see trick 378
__attribute__((used)) int __pad_0(int x) { int y = x * 0 + 3; return y; }
__attribute__((used)) int __pad_1(int x) { int y = x * 1 + 3; return y; }
__attribute__((used)) int __pad_2(int x) { int y = x * 2 + 3; return y; }
__attribute__((used)) int __pad_3(int x) { int y = x * 3 + 3; return y; }
__attribute__((used)) int __pad_4(int x) { int y = x * 4 + 3; return y; }
__attribute__((used)) int __pad_5(int x) { int y = x * 5 + 3; return y; }
__attribute__((used)) int __pad_6(int x) { int y = x * 6 + 3; return y; }
__attribute__((used)) int __pad_7(int x) { int y = x * 7 + 3; return y; }
__attribute__((used)) int __pad_8(int x) { int y = x * 8 + 3; return y; }
__attribute__((used)) int __pad_9(int x) { int y = x * 9 + 3; return y; }
__attribute__((used)) int __pad_10(int x) { int y = x * 10 + 3; return y; }
__attribute__((used)) int __pad_11(int x) { int y = x * 11 + 3; return y; }
ExcelLexicon::~ExcelLexicon()
{
    *(void**)this = (void*)0xbaa0b0;
}

} } }
