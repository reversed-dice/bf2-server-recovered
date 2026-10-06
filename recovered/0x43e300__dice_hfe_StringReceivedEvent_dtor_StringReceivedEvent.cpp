// FUNCTION: BF2 0x43e300
namespace dice { namespace hfe {

class EventNode {
public:
    virtual ~EventNode() {}
    virtual void release();
};

class StringReceivedEvent : public EventNode {
public:
    virtual ~StringReceivedEvent();
    virtual void getType() const;

    char _pad[0x38];
    char* m_str;
};

StringReceivedEvent::~StringReceivedEvent()
{
    delete[] m_str;
}

} }
// REVERSED_FUNCTION: dice_hfe_StringReceivedEvent_dtor_StringReceivedEvent (0x43e300)
