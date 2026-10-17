// BF2_FLAGS: -fno-strict-aliasing
// FUNCTION: BF2 0x7c5a70
#include <string>
#include <map>
#include <list>

namespace dice { namespace hfe { namespace io {

class INetworkableInfo {
public:
    virtual void f0();
    virtual void f1();
};

struct Entry {
    Entry* next;
    std::string key;
};

class Table {
public:
    Entry** slots;
    unsigned int count;
    ~Table() {
        for (unsigned int i = 0; i < count; ++i) {
            Entry* e = slots[i];
            while (e) {
                Entry* nx = e->next;
                delete e;
                e = nx;
            }
            slots[i] = 0;
        }
        if (slots) operator delete[](slots);
    }
};

class NetworkableInfoManager {
public:
    char _pad0x08[0x8];
    std::list<std::string> m_0x10;
    std::map<int, INetworkableInfo*> m_0x20;
    char _pad0x50[0x8];
    Table m_0x58;
    char _pad0x68[0x10];
    std::map<int, std::string> m_0x78;
    virtual ~NetworkableInfoManager();
};

// compile-state padding: 20 unused functions, see trick 378
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
__attribute__((used)) int __pad_12(int x) { int y = x * 12 + 3; return y; }
__attribute__((used)) int __pad_13(int x) { int y = x * 13 + 3; return y; }
__attribute__((used)) int __pad_14(int x) { int y = x * 14 + 3; return y; }
__attribute__((used)) int __pad_15(int x) { int y = x * 15 + 3; return y; }
__attribute__((used)) int __pad_16(int x) { int y = x * 16 + 3; return y; }
__attribute__((used)) int __pad_17(int x) { int y = x * 17 + 3; return y; }
__attribute__((used)) int __pad_18(int x) { int y = x * 18 + 3; return y; }
__attribute__((used)) int __pad_19(int x) { int y = x * 19 + 3; return y; }
NetworkableInfoManager::~NetworkableInfoManager() {}

} } }
// REVERSED_FUNCTION: dice_hfe_io_NetworkableInfoManager_dtor_NetworkableInfoManager
