// FUNCTION: BF2 0x4b5460
// BF2_FLAGS: -fno-strict-aliasing
namespace dice { namespace hfe { namespace world {

class Cell {
public:
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual float v3();
};

class MaterialManager {
public:
    virtual void addRef();
    virtual void getRef();
    virtual void release();
    virtual void queryInterface(unsigned int) const;
    virtual void v4(int);
    virtual void v5(int);
    virtual void v6(int);
    virtual void v7(int);
    virtual void v8(int);
    virtual void v9(int);
    virtual void v10(int);
    virtual void v11(int);
    virtual void v12(int);
    virtual void v13(int);
    virtual void v14(int);
    virtual void v15(int);
    virtual void v16(int);
    virtual void v17(int);
    virtual void v18(int);
    virtual void v19(int);
    virtual Cell* getCell(unsigned int, unsigned int) const;
    virtual void v21(int);
    virtual float getDamageMod(unsigned int, unsigned int) const;
    virtual void v23(int);
    virtual void v24(int);
    virtual void v25(int);
    virtual void v26(int);
    virtual void v27(int);
    virtual void v28(int);
    virtual void v29(int);
    virtual void v30(int);
    virtual void v31(int);
    virtual void v32(int);
    virtual void v33(int);
    virtual void v34(int);
    virtual void v35(int);
    virtual void v36(int);
    char _pad0x08[0x44];
    float m_0x4c;
};

float MaterialManager::getDamageMod(unsigned int a, unsigned int b) const {
    float f = -1.0f;
    Cell* c = getCell(a, b);
    if (c != 0) {
        f = c->v3();
    }
    if (f == -1.0f) {
        c = getCell(a, 0);
        if (c != 0) {
            f = c->v3();
        }
        if (f == -1.0f) {
            f = m_0x4c;
        }
    }
    return f;
}

} } }
