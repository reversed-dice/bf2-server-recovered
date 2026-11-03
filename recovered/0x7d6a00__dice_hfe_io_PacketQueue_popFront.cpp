// from api 97.30%
// FUNCTION: BF2 0x7d6a00
namespace dice { namespace hfe { namespace io {

class PacketQueue {
public:
    int m_count;            // +0x0
    int m_pad0;             // +0x4
    unsigned int m_head;    // +0x8
    unsigned int m_pad1;    // +0xc
    char* m_data;           // +0x10
    char _pad2[0xc];
    unsigned int m_mask;    // +0x24

    bool popFront();
    bool dummy_pad_0();
bool dummy_pad_1();
bool dummy_pad_2();
bool dummy_pad_3();
bool dummy_pad_4();
bool dummy_pad_5();
bool dummy_pad_6();
};

bool PacketQueue::dummy_pad_0() {
    if (m_count != 0) {
        char* d1 = *(char* volatile*)&m_data;
        *(int*)(d1 + (unsigned long)m_head * 0x20) = 0;
        char* d2 = *(char* volatile*)&m_data;
        *(int*)(d2 + (unsigned long)m_head * 0x20 + 8) = 0;
        --m_count;
        m_head = (m_head + 1) & m_mask;
        return true;
    }
    return false;
}
bool PacketQueue::dummy_pad_1() {
    if (m_count != 0) {
        char* d1 = *(char* volatile*)&m_data;
        *(int*)(d1 + (unsigned long)m_head * 0x20) = 0;
        char* d2 = *(char* volatile*)&m_data;
        *(int*)(d2 + (unsigned long)m_head * 0x20 + 8) = 0;
        --m_count;
        m_head = (m_head + 1) & m_mask;
        return true;
    }
    return false;
}
bool PacketQueue::dummy_pad_2() {
    if (m_count != 0) {
        char* d1 = *(char* volatile*)&m_data;
        *(int*)(d1 + (unsigned long)m_head * 0x20) = 0;
        char* d2 = *(char* volatile*)&m_data;
        *(int*)(d2 + (unsigned long)m_head * 0x20 + 8) = 0;
        --m_count;
        m_head = (m_head + 1) & m_mask;
        return true;
    }
    return false;
}
bool PacketQueue::dummy_pad_3() {
    if (m_count != 0) {
        char* d1 = *(char* volatile*)&m_data;
        *(int*)(d1 + (unsigned long)m_head * 0x20) = 0;
        char* d2 = *(char* volatile*)&m_data;
        *(int*)(d2 + (unsigned long)m_head * 0x20 + 8) = 0;
        --m_count;
        m_head = (m_head + 1) & m_mask;
        return true;
    }
    return false;
}
bool PacketQueue::dummy_pad_4() {
    if (m_count != 0) {
        char* d1 = *(char* volatile*)&m_data;
        *(int*)(d1 + (unsigned long)m_head * 0x20) = 0;
        char* d2 = *(char* volatile*)&m_data;
        *(int*)(d2 + (unsigned long)m_head * 0x20 + 8) = 0;
        --m_count;
        m_head = (m_head + 1) & m_mask;
        return true;
    }
    return false;
}
bool PacketQueue::dummy_pad_5() {
    if (m_count != 0) {
        char* d1 = *(char* volatile*)&m_data;
        *(int*)(d1 + (unsigned long)m_head * 0x20) = 0;
        char* d2 = *(char* volatile*)&m_data;
        *(int*)(d2 + (unsigned long)m_head * 0x20 + 8) = 0;
        --m_count;
        m_head = (m_head + 1) & m_mask;
        return true;
    }
    return false;
}
bool PacketQueue::dummy_pad_6() {
    if (m_count != 0) {
        char* d1 = *(char* volatile*)&m_data;
        *(int*)(d1 + (unsigned long)m_head * 0x20) = 0;
        char* d2 = *(char* volatile*)&m_data;
        *(int*)(d2 + (unsigned long)m_head * 0x20 + 8) = 0;
        --m_count;
        m_head = (m_head + 1) & m_mask;
        return true;
    }
    return false;
}

bool PacketQueue::popFront() {
    if (m_count != 0) {
        char* d1 = *(char* volatile*)&m_data;
        *(int*)(d1 + (unsigned long)m_head * 0x20) = 0;
        char* d2 = *(char* volatile*)&m_data;
        *(int*)(d2 + (unsigned long)m_head * 0x20 + 8) = 0;
        --m_count;
        m_head = (m_head + 1) & m_mask;
        return true;
    }
    return false;
}

} } }
