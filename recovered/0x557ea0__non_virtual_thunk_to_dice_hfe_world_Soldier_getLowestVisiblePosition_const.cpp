// FUNCTION: BF2 0x557ea0
// non-virtual thunk, secondary base at +0x248, `this` in RSI
struct R { float a[8]; };
struct P { virtual void p0(); char pad[0x240]; };
struct B { virtual R get() const; };
struct C : P, B { R get() const; };
R C::get() const { return R(); }
