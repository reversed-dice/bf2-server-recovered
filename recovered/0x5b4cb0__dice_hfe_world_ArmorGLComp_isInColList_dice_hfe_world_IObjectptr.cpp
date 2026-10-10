// FUNCTION: BF2 0x5b4cb0
// Target: 0x5b4cb0
namespace dice { namespace hfe { namespace world {

class IObject {};

class ArmorGLComp {
public:
    char _pad[0x88];
    IObject* m_colList[16]; // 0x88 .. 0x108
    char _pad2[0x40];
    int m_head;             // 0x148
    int m_tail;             // 0x14c

    bool isInColList(IObject* obj);
};

bool ArmorGLComp::isInColList(IObject* obj) {
    for (int i = m_head; i != m_tail; i = (i + 1) & 0xf) {
        if (m_colList[i] == obj)
            return true;
    }
    return false;
}

} } }
