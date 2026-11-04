// FUNCTION: BF2 0x7a8c30
// BF2_FLAGS: -fno-strict-aliasing
#include <string>
#include <map>
#include <list>
#include <deque>

namespace dice { namespace hfe {

struct NoCaseStringCompare {
    bool operator()(std::string const&, std::string const&) const;
};

namespace io {

class Console {
public:
    virtual ~Console() {}
};

class Hash {
public:
    struct Node {
        Node* m_next;          // 0x00
        std::string m_key;     // 0x08
        bool m_value;          // 0x10
    };

    Node** m_buckets;          // 0x00
    unsigned int m_numBuckets; // 0x08
    char _pad[0x18 - 0x10];

    ~Hash() {
        if (m_numBuckets != 0) {
            unsigned int i = 0;
            do {
                Node* p = m_buckets[i];
                while (p != 0) {
                    Node* n = p->m_next;
                    delete p;
                    p = n;
                }
                m_buckets[i] = 0;
            } while (++i < m_numBuckets);
        }
        if (m_buckets != 0) {
            operator delete[](m_buckets);
        }
    }
};

class OldConsole : public Console {
public:
    struct Level {
        std::map<std::string, std::string, NoCaseStringCompare> m_vars;
        std::map<std::string, std::string, NoCaseStringCompare> m_consts;
        bool m_b60;
        char _pad61[7];
        std::list<std::string> m_list;
        int m_i78;
        int _pad7c;
        std::string m_str1;
        std::string m_str2;
        std::string m_str3;
        int m_i98;
        int m_i9c;
        char _padEnd[0xb0 - 0xa0];
    };

    char _pad08[0x10];              // 0x008
    Hash m_hash18;                  // 0x018
    std::deque<std::string> m_dq30; // 0x030
    char _pad80[0x8];               // 0x080
    std::deque<std::string> m_dq88; // 0x088
    char _padD8[0x170 - 0xd8];      // 0x0d8
    std::string m_s170;             // 0x170
    char _pad178[0x188 - 0x178];    // 0x178
    std::string m_s188;             // 0x188
    std::string m_s190;             // 0x190
    char _pad198[0x1a0 - 0x198];    // 0x198
    std::string m_boundScripts[12]; // 0x1a0
    char _pad200[0x228 - 0x200];    // 0x200
    std::string m_s228;             // 0x228
    char _pad230[0x238 - 0x230];    // 0x230
    Level m_levels[10];             // 0x238
    Level* m_currentLevel;          // 0x918
    int m_depth;                    // 0x920
    char _pad924[0x928 - 0x924];    // 0x924
    std::map<std::string, std::string, NoCaseStringCompare> m_map928; // 0x928
    char _pad958[0x960 - 0x958];    // 0x958
    Hash m_hash960;                 // 0x960
    std::map<std::string, bool> m_map978; // 0x978
    std::string m_s9a8;             // 0x9a8

    virtual ~OldConsole();
};

OldConsole::~OldConsole() {}

} } }
