// FUNCTION: BF2 0x76d400
namespace dice { namespace hfe { namespace ai {

struct Contact { int _v; };   // trivially destructible

// Declared, not defined: the target tail-calls this dtor (0x0077e7a0).
struct BFCollisionHandlerBase {
    virtual ~BFCollisionHandlerBase();
};

class BFCollisionHandler : public BFCollisionHandlerBase {
public:
    int       m_count;      // 0x08
    char      _pad[0x4];
    Contact** m_contacts;   // 0x10
    virtual ~BFCollisionHandler();
};

BFCollisionHandler::~BFCollisionHandler()
{
    for (int i = 0; i < m_count; ++i)
        delete m_contacts[i];
    delete m_contacts;
}

} } }
// REVERSED_FUNCTION: dice_hfe_ai_BFCollisionHandler_dtor_BFCollisionHandler (0x76d400)
