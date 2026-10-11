// FUNCTION: BF2 0x574100
namespace dice { namespace hfe {

struct Vec4 {
    float x, y, z, w;
};

struct Mat4 {
    Vec4 r[4];
};

class IBase {
public:
    virtual void addRef();
    virtual void getRef();
    virtual void release();
};

} }

namespace dice { namespace hfe { namespace world {

extern unsigned int CID_SimpleObjectTemplate;

class IObject;

class ITemplate {
public:
    virtual void addRef();
    virtual void getRef();
    virtual void release();
    virtual void* queryInterface(unsigned int iid);
    virtual unsigned int getClassID();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual void v9();
    virtual void v10();
    virtual void v11();
    virtual void v12();
    virtual void v13();
    virtual void v14();
    virtual void v15();
    virtual void v16();
    virtual void v17();
    virtual void v18();
    virtual void v19();
    virtual void* queryImplementation(unsigned int cid);
};

class SimpleObjectTemplate {
public:
    char m_pad[0x74];
    int m_geometryPart;
};

class IObject {
public:
    virtual void addRef();
    virtual void getRef();
    virtual void release();
    virtual void* queryInterface(unsigned int iid);
    virtual unsigned int getClassID();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual void v9();
    virtual void v10();
    virtual void v11();
    virtual void v12();
    virtual void v13();
    virtual void v14();
    virtual void v15();
    virtual void v16();
    virtual void v17();
    virtual void v18();
    virtual void v19();
    virtual void v20();
    virtual void v21();
    virtual void v22();
    virtual void v23();
    virtual void v24();
    virtual void v25();
    virtual void v26();
    virtual void v27();
    virtual void v28();
    virtual void v29();
    virtual void v30();
    virtual void v31();
    virtual void v32();
    virtual const dice::hfe::Mat4& getAbsolutePosition() const;
    virtual void v34();
    virtual void v35();
    virtual void v36();
    virtual void v37();
    virtual void v38();
    virtual void v39();
    virtual void v40();
    virtual void v41();
    virtual void v42();
    virtual void v43();
    virtual void v44();
    virtual void v45();
    virtual void v46();
    virtual void v47();
    virtual void v48();
    virtual void v49();
    virtual void v50();
    virtual void v51();
    virtual void v52();
    virtual void v53();
    virtual void v54();
    virtual void v55();
    virtual void v56();
    virtual void v57();
    virtual void v58();
    virtual void v59();
    virtual IObject* getChild();

    unsigned char m_flags;
    char _pad[0x1f];
    ITemplate* m_template;
    char _pad2[0x20];
    IObject* m_parentRef;
    IObject* m_nextSibling;
    char _pad3[0x10];
    void* m_partGeom;
};

} } }

namespace dice { namespace hfe { namespace geom {

class IGeometry {
public:
    virtual void addRef();
    virtual void getRef();
    virtual void release();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual void v9();
    virtual void v10();
    virtual void v11();
    virtual void v12();
    virtual void v13();
    virtual void v14();
    virtual void v15();
    virtual void v16();
    virtual void v17();
    virtual void v18();
    virtual void v19();
    virtual void v20();
    virtual void setPart(const dice::hfe::Mat4& m, int part);
};

} } }

namespace dice { namespace hfe { namespace world {

void setChildPartGeometries(IObject* obj, dice::hfe::geom::IGeometry* geom)
{
    while (obj != 0 && obj->m_partGeom == 0) {
        SimpleObjectTemplate* s = (SimpleObjectTemplate*)obj->m_template->queryImplementation(CID_SimpleObjectTemplate);
        if (s != 0) {
            int n = s->m_geometryPart;
            if (n > 0)
                geom->setPart(obj->getAbsolutePosition(), n);
        }
        setChildPartGeometries(obj->getChild(), geom);
        obj = obj->m_nextSibling;
    }
}

} } }

