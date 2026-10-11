// FUNCTION: BF2 0x63a480
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

class Rotor {
public:
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
    virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
    virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11();
    virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15();
    virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19();
    virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23();
    virtual void updateFlags(unsigned int, unsigned int);
    virtual void v25(); virtual void v26(); virtual void v27(); virtual void v28();
    virtual void v29(); virtual void v30(); virtual void v31(); virtual void v32();
    virtual void v33(); virtual void v34(); virtual void v35(); virtual void v36();
    virtual void v37(); virtual void v38(); virtual void v39(); virtual void v40();
    virtual void v41(); virtual void v42(); virtual void v43(); virtual void v44();
    virtual void v45(); virtual void v46(); virtual void v47(); virtual void v48();
    virtual void v49(); virtual void v50(); virtual void v51(); virtual void v52();
    virtual bool SetActiveLod(int lod);
    char m_pad[0x68];
    LodObject* m_p70;
};

bool Rotor::SetActiveLod(int lod)
{
    LodObject* o = m_p70;
    if (!o)
        return false;
    if (lod == 1) {
        if (o->getLod() <= 2) {
            updateFlags(1, 0);
            return false;
        }
        o->setLod(2);
        return true;
    }
    if (o->getLod() <= 2) {
        updateFlags(0, 1);
        return false;
    }
    o->setLod(0);
    return true;
}
} } }
