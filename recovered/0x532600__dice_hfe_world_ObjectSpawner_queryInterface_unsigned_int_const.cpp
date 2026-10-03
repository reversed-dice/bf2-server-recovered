// FUNCTION: BF2 0x532600
// BF2_FLAGS: -fcrossjumping
namespace dice { namespace hfe { namespace world {

extern unsigned int IID_IGameObject;
extern unsigned int IID_ISomething;
extern unsigned int IID_ISomethingElse;
extern unsigned int IID_IYetAnother;
extern unsigned int IID_0x8c230;

class ObjectSpawner {
public:
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
    virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
    virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11();
    virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15();
    virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19();
    virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23();
    virtual void v24(); virtual void v25(); virtual void v26(); virtual void v27();
    virtual void* queryInterface(unsigned int iid);

    char m_100[0x130];
    char m_230[0x100];
};

void* ObjectSpawner::queryInterface(unsigned int iid) {
    if (iid == IID_IGameObject) return this;
    if (iid == IID_ISomething) return this;
    if (iid == IID_ISomethingElse) return (char*)this + 0x230;
    if (iid == IID_IYetAnother) return (char*)this + 0x230;
    if (iid == IID_0x8c230) return (char*)this + 0x100;
    return 0;
}

} } }
