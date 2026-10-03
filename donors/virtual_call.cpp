// Donor: calls through the vtable, which the corpus only shows as raw
// `CALL qword ptr [RAX+off]` with no source line attached to it.
//
// The fourth-ranked unknown block of the remaining corpus is exactly this
// shape: load the vptr, set up one argument, call a slot, test the returned
// bool, branch. Written here as the C++ it comes from.
namespace donors {

class Iface {
public:
    virtual ~Iface();
    virtual bool isValid() const;
    virtual bool accepts(void* other);
    virtual int getId() const;
    virtual void update(float dt);
    virtual void* getOwner() const;
};

bool virtual_bool_then_branch(Iface* self, void* other, int* out)
{
    if (!self->accepts(other))
        return false;
    *out = self->getId();
    return true;
}

int virtual_guarded_id(Iface* self)
{
    if (!self->isValid())
        return -1;
    return self->getId();
}

void virtual_update_if_valid(Iface* self, float dt)
{
    if (self->isValid())
        self->update(dt);
}

void* virtual_owner_or_null(Iface* self)
{
    if (!self->isValid())
        return 0;
    return self->getOwner();
}

void virtual_call_on_member(void* container, float dt)
{
    Iface* obj = *reinterpret_cast<Iface**>((char*)container + 0x38);
    if (obj != 0)
        obj->update(dt);
}

}  // namespace donors
