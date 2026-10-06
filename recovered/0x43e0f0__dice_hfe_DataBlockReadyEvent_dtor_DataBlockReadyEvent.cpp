// FUNCTION: BF2 0x43e0f0
namespace dice { namespace hfe {

class EventNode {
public:
    virtual ~EventNode() {}
    virtual void release();
};

class DataBlockReadyEvent : public EventNode {
public:
    virtual ~DataBlockReadyEvent();
    virtual unsigned int getType() const;

    char _pad[0x30];
    char* m_data;
};

DataBlockReadyEvent::~DataBlockReadyEvent()
{
    delete[] m_data;
}

} }
// REVERSED_FUNCTION: dice_hfe_DataBlockReadyEvent_dtor_DataBlockReadyEvent (0x43e0f0)
