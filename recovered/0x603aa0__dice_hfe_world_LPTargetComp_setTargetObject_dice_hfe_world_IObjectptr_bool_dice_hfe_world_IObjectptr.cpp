// FUNCTION: BF2 0x603aa0
namespace dice { namespace hfe { namespace world {
class IObject;
struct TargetComp {
  void setTargetObject(IObject* o, bool b, IObject* p);
};
struct LPTargetComp {
  void enableTargetObject();
  void disableTargetObject();
  void setTargetObject(IObject* o, bool b, IObject* p);
};
}}}

typedef bool (*VFn0)(void*);

void dice::hfe::world::LPTargetComp::setTargetObject(dice::hfe::world::IObject* o, bool b,
                                                     dice::hfe::world::IObject* p) {
  ((VFn0)(*(void***)this)[0x170 / 8])(this);
  ((dice::hfe::world::TargetComp*)this)->setTargetObject(o, b, p);
  if (b)
    this->enableTargetObject();
  else
    this->disableTargetObject();
}
