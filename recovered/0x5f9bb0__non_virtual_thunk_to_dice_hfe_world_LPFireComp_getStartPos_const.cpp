// FUNCTION: BF2 0x5f9bb0
// non-virtual thunk, secondary base at +0x20, `this` in RSI
struct R { float a[8]; };
struct P { virtual void p0(); char pad[0x18]; };
struct B { virtual R get() const; };
struct C : P, B { R get() const; };
R C::get() const { return R(); }
