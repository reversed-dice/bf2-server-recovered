// FUNCTION: BF2 0x43e860
extern "C" void fn_43eea0(void*);
struct DataBlockManager {
    virtual void s0();
    virtual void s1();
    virtual ~DataBlockManager();
};
DataBlockManager::~DataBlockManager() { fn_43eea0((char*)this + 0x8); }
