// FUNCTION: BF2 0x513d70
// non-virtual thunk, secondary base at +0x1f8, `this` in RSI
struct R { float a[8]; };
struct P { virtual void p0(); char pad[0x1f0]; };
struct B { virtual R get() const; };
struct C : P, B { R get() const; };
R C::get() const { return R(); }
