// FUNCTION: BF2 0x5f5920
namespace dice { namespace hfe {

extern void* gameLogic; // 0x10b8c08

namespace world {

class IObjectTemplate;

class FireComp {
public:
    bool getUseLocalPrediction(IObjectTemplate const* tmpl);
    bool ignoreNetworkedProjectileOnClient(IObjectTemplate const* tmpl);
};

bool FireComp::ignoreNetworkedProjectileOnClient(IObjectTemplate const* tmpl)
{
    if (tmpl) {
        if (!getUseLocalPrediction(tmpl)) {
            long* p = ((long* (*)(void const*))(*(void const***)tmpl)[0x128 / 8])(tmpl);
            if (*(long*)(*p - 0x18) != 0) {
                if (!((bool (*)(void*))(*(void***)dice::hfe::gameLogic)[0x278 / 8])(dice::hfe::gameLogic))
                    return true;
            }
        }
    }
    return false;
}

} } }
