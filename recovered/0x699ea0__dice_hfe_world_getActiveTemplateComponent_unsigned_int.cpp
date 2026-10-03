// FUNCTION: BF2 0x699ea0
namespace dice { namespace hfe { namespace world {

// Forward declarations
class IObjectTemplateComponent;
class IObjectTemplate;

// CID constant used to identify template type
extern const unsigned int CID_ObjectTemplate;

// getActiveTemplate defined at 0x0069de30
IObjectTemplate* getActiveTemplate(unsigned int cid);

// ── IObjectTemplateComponent ──────────────────────────────────
class IObjectTemplateComponent {
public:
    virtual ~IObjectTemplateComponent();
};

// ── IObjectTemplate ───────────────────────────────────────────
// Primary vtable layout (-fno-rtti, no RTTI pointer):
//   vtable+0x00: ~IObjectTemplate (D0 complete)              [slot  0]
//   vtable+0x08: ~IObjectTemplate (D1 deleting)              [slot  1]
//   vtable+0x10 … vtable+0xb0: (inherited / base virtuals)   [slots 2-22]
//   vtable+0xb8: getComponent(unsigned int)                  [slot 23]
//
// Note: Itanium ABI emits two destructor vtable entries;
//       21 placeholder virtuals fill the gap to slot 23.
class IObjectTemplate {
public:
    virtual ~IObjectTemplate();

    // slots 2-22: inherited virtuals from full hierarchy (21 placeholders)
    virtual void   v01();
    virtual void   v02();
    virtual void   v03();
    virtual void   v04();
    virtual void   v05();
    virtual void   v06();
    virtual void   v07();
    virtual void   v08();
    virtual void   v09();
    virtual void   v10();
    virtual void   v11();
    virtual void   v12();
    virtual void   v13();
    virtual void   v14();
    virtual void   v15();
    virtual void   v16();
    virtual void   v17();
    virtual void   v18();
    virtual void   v19();
    virtual void   v20();
    virtual void   v21();

    // slot 23 ── vtable+0xb8
    virtual IObjectTemplateComponent* getComponent(unsigned int index);
};

// ── ObjectTemplate ────────────────────────────────────────────

// Fields: vptr1, unk8, vptr2, shortName, longName, componentRbTree, eraseNode
class ObjectTemplate : public IObjectTemplate {
    // inherits all virtuals above
};

// ── getActiveTemplateComponent ────────────────────────────────
// Mirrors: dice_hfe_world_getActiveTemplateComponent_unsigned_int (0x00699ea0)
IObjectTemplateComponent* getActiveTemplateComponent(unsigned int index) {
    IObjectTemplate* tmpl = getActiveTemplate(CID_ObjectTemplate);
    if (tmpl) {
        return tmpl->getComponent(index);
    }
    return 0;
}

} } } // namespace dice::hfe::world