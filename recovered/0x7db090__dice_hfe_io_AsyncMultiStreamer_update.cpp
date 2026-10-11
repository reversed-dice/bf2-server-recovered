// FUNCTION: BF2 0x7db090

namespace dice {
namespace hfe {
namespace io {

class AsyncMultiStream {
public:
    void update();
};

struct Node {
    Node* next;
    Node* prev;
    AsyncMultiStream* value;
};

class AsyncMultiStreamer {
public:
    virtual void _v0();
    virtual void _v1();
    virtual ~AsyncMultiStreamer();
    Node* m_head;
    Node* m_tail;

    void update();
};

void AsyncMultiStreamer::update()
{
    Node* head = (Node*)((char*)this + 0x10);
    Node* cur = *(Node**)((char*)this + 0x10);
    if (cur != head)
    {
        do {
            cur->value->update();
            cur = cur->next;
        } while (cur != head);
    }
}

}
}
}
