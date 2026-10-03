// FUNCTION: BF2 0x435f90
namespace std {
struct _List_node_base {
    _List_node_base* _M_next;
    _List_node_base* _M_prev;
    void unhook();
};
}

namespace dice { namespace hfe {

class ActionBuffer : public std::_List_node_base {
public:
    unsigned long m_unk_0x10;
    unsigned int m_unk_0x14;
    unsigned int m_unk_0x18;
    unsigned int m_unk_0x34;

    void removeOlderThanIndex(int index);
};

void ActionBuffer::removeOlderThanIndex(int index)
{
    ActionBuffer* node = static_cast<ActionBuffer*>(_M_next);

    if (node != this) {
        if (index < static_cast<int>(node->m_unk_0x10))
            return;
    }
    if (this == node)
        return;

    do {
        if (static_cast<int>(node->m_unk_0x10) == index)
            return;
        node->unhook();
        ::operator delete(node);
        node = static_cast<ActionBuffer*>(_M_next);
    } while (this != node);
}

} }
// REVERSED_FUNCTION: dice_hfe_ActionBuffer_removeOlderThanIndex_int (0x435f90)
// REVERSED_FUNCTION: dice_hfe_ActionBuffer_removeOlderThanIndex_int (0x435f90)
