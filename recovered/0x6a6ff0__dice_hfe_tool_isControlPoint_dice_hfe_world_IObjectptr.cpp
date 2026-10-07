// BF2_FLAGS: -fno-if-conversion
// FUNCTION: BF2 0x6a6ff0
namespace dice { namespace hfe {
namespace world {
extern unsigned int CID_ControlPointTemplate;

class ITemplate {
public:
    virtual void _v0();
    virtual void _v1();
    virtual void _v2();
    virtual void _v3();
    virtual unsigned int getClassId(); // slot 4 (0x20)
};

class IObject {
public:
    char _pad[0x28];
    ITemplate* m_template;
};

}

namespace tool {

unsigned int isControlPoint(world::IObject* obj) {
    if (obj) {
        world::ITemplate* tmpl = obj->m_template;
        if (tmpl) {
            if (tmpl->getClassId() == world::CID_ControlPointTemplate)
                return 1;
            return 0;
        }
    }
    return 0;
}

} } }
