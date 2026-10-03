// FUNCTION: BF2 0x4754a0
namespace dice { namespace hfe {

class ObjectTemplateManager {
public:
    virtual ~ObjectTemplateManager() {}
    virtual void method0() = 0;
    virtual void method1() = 0;
    virtual void init() = 0;
};

extern ObjectTemplateManager* objectTemplateManager;

unsigned int GameLogic_init() {
    objectTemplateManager->init();
    return 1;
}

} } // namespace dice::hfe
// REVERSED_FUNCTION: dice_hfe_GameLogic_init (0x4754a0)