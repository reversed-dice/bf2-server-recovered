// FUNCTION: BF2 0x4ec360
namespace dice { namespace hfe {

class StatusMonitorImpl {
public:
    ~StatusMonitorImpl();

    unsigned int m_unk_0x1;
    int m_unk_0x8;
    double m_unk_0x10;
    void* m_unk_0x18;
};

StatusMonitorImpl::~StatusMonitorImpl() {
    *reinterpret_cast<void**>(this) = reinterpret_cast<void*>(0xb3a7f0);
}

} }
// REVERSED_FUNCTION: dice_hfe_StatusMonitorImpl_dtor_StatusMonitorImpl (0x4ec360)