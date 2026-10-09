// FUNCTION: BF2 0x436020
namespace dice { namespace hfe {
namespace io {
struct PlayerInput {
    int data[64];
    long a;
    long b;
    char c;
};
}

class PlayerAction {
public:
    int m_sequence;
    char _pad[0x18];
    void set(io::PlayerInput const& input);
};

class ActionBuffer {
public:
    void* m_next;
    void* m_prev;
    int m_sequence;
    int m_14;
    PlayerAction m_action; // +0x18
    int m_34;

    ActionBuffer();
    void clear(int a);
};

ActionBuffer::ActionBuffer()
{
    m_next = this;
    m_prev = this;
    m_sequence = 0;
    m_14 = -1;
    m_34 = 0;
    clear(0);
    m_action.m_sequence = -1;
    io::PlayerInput b;
    b.a = 0;
    b.b = 0;
    b.c = 0;
    for (long i = 0; i != 64; i++) {
        b.data[i] = 0;
    }
    m_action.set(b);
}

} }
