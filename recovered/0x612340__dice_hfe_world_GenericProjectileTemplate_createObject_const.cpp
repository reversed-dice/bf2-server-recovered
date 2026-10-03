// FUNCTION: BF2 0x612340
namespace dice { namespace hfe { namespace world {

extern void* operator_new_407508(unsigned long size);
extern void ctor_612070(void* self, void* tmpl);

class GenericProjectileTemplate {
public:
    void* createObject() const;
};

void* GenericProjectileTemplate::createObject() const {
    void* p = operator_new_407508(0x3b0);
    ctor_612070(p, (void*)this);
    return p;
}

} } }
