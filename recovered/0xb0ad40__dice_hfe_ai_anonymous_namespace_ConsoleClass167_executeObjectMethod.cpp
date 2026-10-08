// FUNCTION: BF2 0xb0ad40
namespace dice { namespace hfe { namespace ai {

class AITemplatePlugInManager {
public:
    void* getActiveTemplatePlugIn() const;
    static AITemplatePlugInManager* m_instance;
};

class PlugIn {
public:
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual int getClassId() const;
};

} } }

extern "C" void* eom_0xb0ad40(void* self) {
    int sel = *(int*)((char*)self + 0x30);
    if (sel == 0) {
        *(unsigned char*)((char*)self + 0x108) = 1;
        void* t = 0;
        if (dice::hfe::ai::AITemplatePlugInManager::m_instance != 0) {
            t = dice::hfe::ai::AITemplatePlugInManager::m_instance->getActiveTemplatePlugIn();
            if (t != 0 && ((dice::hfe::ai::PlugIn*)t)->getClassId() != 5) t = 0;
        }
        *(int*)((char*)self + 0x10c) = *(int*)((char*)t + 0x28);
        return (char*)self + 0x10c;
    }
    if (sel == 1) {
        float v = **(float**)((char*)self + 0x38);
        *(unsigned char*)((char*)self + 0x108) = 0;
        void* t = 0;
        if (dice::hfe::ai::AITemplatePlugInManager::m_instance != 0) {
            t = dice::hfe::ai::AITemplatePlugInManager::m_instance->getActiveTemplatePlugIn();
            if (t != 0 && ((dice::hfe::ai::PlugIn*)t)->getClassId() != 5) t = 0;
        }
        *(float*)((char*)t + 0x28) = v;
        *(float*)((char*)t + 0x2c) = v * v;
        return 0;
    }
    return 0;
}
