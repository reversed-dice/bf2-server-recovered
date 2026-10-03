// FUNCTION: BF2 0x699ee0
namespace dice { namespace hfe { namespace world {

extern const unsigned int IID_IObjectTemplateComponent;

// Interface returned by queryInterface. Layout unknown beyond the single
// virtual slot exercised here (vtable+0x50).
class IDispatchable {
public:
    virtual ~IDispatchable();
    virtual void v01();
    virtual void v02();
    virtual void v03();
    virtual void v04();
    virtual void v05();
    virtual void v06();
    virtual void v07();
    virtual void v08();
    virtual void* dispatch(unsigned int param);
};

class IObjectTemplateComponent {
public:
    virtual ~IObjectTemplateComponent();
    virtual void v01();
    virtual IDispatchable* queryInterface(unsigned int iid);
};

// defined at 0x699ea0
IObjectTemplateComponent* getActiveTemplateComponent(unsigned int index);

void* getActiveTemplateComponent(unsigned int index, unsigned int param2)
{
    IObjectTemplateComponent* comp = getActiveTemplateComponent(index);
    if (__builtin_expect(comp == 0, 1)) return 0;
    IDispatchable* iface = comp->queryInterface(IID_IObjectTemplateComponent);
    if (__builtin_expect(iface == 0, 1)) return 0;
    return iface->dispatch(param2);
}

} } }
// REVERSED_FUNCTION: dice_hfe_world_getActiveTemplateComponent_unsigned_int_unsigned_int (0x699ee0)
