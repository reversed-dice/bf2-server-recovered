// FUNCTION: BF2 0x43e130
namespace dice { namespace hfe {

class EventNode {
public:
    virtual ~EventNode() {}
    virtual void release();
};

class DataBlockReadyEvent : public EventNode {
public:
    virtual ~DataBlockReadyEvent();
    virtual void getType() const;
    char _pad[0x38 - sizeof(EventNode)];
    char* m_data;
};

DataBlockReadyEvent::~DataBlockReadyEvent() {
    delete[] m_data;
}

} }
