// FUNCTION: BF2 0x514f90
#include <string>
namespace dice { namespace hfe { namespace world {

extern unsigned int IID_ISimpleObjectTemplate;          // 0xc7d124
extern unsigned int CID_DestroyableObjectNetworkable;   // 0xc75ea0
extern unsigned int CID_SimpleObjectNetworkable;        // 0xc75edc
void setNetworkableComp(void* obj, unsigned int cid);

class DestroyableObject {
public:
  void initNetworkableComp();
};

void DestroyableObject::initNetworkableComp()
{
  void* child = *(void**)((char*)this + 0x28);
  if (child != 0) {
    std::string* s = (std::string*)((void* (*)(void*))(*(void***)child)[0x128 / 8])(child);
    if (s->compare("") != 0) {
      void* r = ((void* (*)(void*, unsigned int))(*(void***)child)[0x18 / 8])(child, IID_ISimpleObjectTemplate);
      if (r != 0 && ((char (*)(void*))(*(void***)r)[0x68 / 8])(r)) {
        setNetworkableComp(this, CID_SimpleObjectNetworkable);
      } else {
        setNetworkableComp(this, CID_DestroyableObjectNetworkable);
      }
    }
  }
  void* n = ((void* (*)(void*))(*(void***)this)[0x1b0 / 8])(this);
  *(float*)((char*)n + 0x1c) = -1.0f;
}

}}}
