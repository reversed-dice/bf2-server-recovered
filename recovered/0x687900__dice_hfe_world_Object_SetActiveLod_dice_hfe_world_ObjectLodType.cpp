// FUNCTION: BF2 0x687900
namespace dice { namespace hfe { namespace world {

class LodObject {
public:
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
    virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
    virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11();
    virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15();
    virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19();
    virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23();
    virtual void v24(); virtual void v25(); virtual void v26(); virtual void v27();
    virtual void setLod(int);
    virtual void v29();
    virtual int getLod();
};

class IObject {
public:
    virtual void v0();
    virtual void v1();
    virtual void v2();
};

void setBoundRadiusIsDirty(IObject* o);

class Object : public IObject {
public:
    virtual void v3(); virtual void v4(); virtual void v5(); virtual void v6();
    virtual void v7(); virtual void v8(); virtual void v9(); virtual void v10();
    virtual void v11(); virtual void v12(); virtual void v13(); virtual void v14();
    virtual void v15(); virtual void v16(); virtual void v17(); virtual void v18();
    virtual void v19(); virtual void v20(); virtual void v21(); virtual void v22();
    virtual void v23();
    virtual void updateFlags(unsigned int, unsigned int);
    char m_pad[0x68];
    LodObject* m_p70;
    bool SetActiveLod(int lod);
};

bool Object::SetActiveLod(int lod)
{
    LodObject* o = m_p70;
    if (o) {
        if (lod == 1) {
            if (o->getLod() > 1)
                o->setLod(o->getLod() - 1);
            else
                updateFlags(1, 0);
        } else {
            if (o->getLod() > 1)
                o->setLod(o->getLod() - 2);
            else
                updateFlags(0, 1);
        }
    }
    setBoundRadiusIsDirty(this);
    return true;
}

} } }
