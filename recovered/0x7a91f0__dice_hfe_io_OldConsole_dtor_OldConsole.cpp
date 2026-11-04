// FUNCTION: BF2 0x7a91f0
// BF2_FLAGS: -fno-strict-aliasing
#include <map>
#include <list>
#include <deque>
#include <string>

namespace dice { namespace hfe {

struct NoCaseStringCompare {
    bool operator()(std::string const&, std::string const&) const;
};

namespace io {

class Console {
public:
    virtual ~Console() {}
};

struct StringHash {
    struct Node {
        Node* m_next;
        std::string m_key;
    };

    Node** m_buckets;
    unsigned int m_size;
    unsigned int m_pad;

    ~StringHash()
    {
        for (unsigned int i = 0; i < m_size; ++i) {
            Node* n = m_buckets[i];
            while (n) {
                Node* next = n->m_next;
                delete n;
                n = next;
            }
            m_buckets[i] = 0;
        }
        delete[] m_buckets;
    }
};

class OldConsole : public Console {
public:
    struct Level {
        std::map<std::string, std::string, NoCaseStringCompare> m_vars;
        std::map<std::string, std::string, NoCaseStringCompare> m_consts;
        char _p1[0x8];
        std::list<std::string> m_lines;
        char _p1b[0x8];
        std::string m_a;
        std::string m_b;
        std::string m_c;
        char _p2[0x18];
    };

    char _p0[0x10];
    StringHash m_hash1;
    char _pa[0x8];
    std::deque<std::string> m_q1;
    char _pb[0x8];
    std::deque<std::string> m_q2;
    char _p3[0x98];
    std::string m_s1;
    char _p4[0x10];
    std::string m_s2;
    std::string m_s3;
    char _p5[0x8];
    std::string m_arr[12];
    char _p6[0x28];
    std::string m_s4;
    char _p7[0x8];
    Level m_levels[10];
    Level* m_currentLevel;
    int m_depth;
    char _p8[0x4];
    std::map<std::string, std::string, NoCaseStringCompare> m_map1;
    char _pc[0x8];
    StringHash m_hash2;
    char _p9[0x8];
    std::map<std::string, bool> m_map2;
    std::string m_s5;

    virtual ~OldConsole();
};

OldConsole::~OldConsole() {}

} } }
