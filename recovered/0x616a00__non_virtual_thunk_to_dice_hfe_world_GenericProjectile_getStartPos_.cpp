// FUNCTION: BF2 0x616a00
// non-virtual thunk, secondary base at +0x238, `this` in RSI
struct R { float a[8]; };
struct P { virtual void p0(); char pad[0x230]; };
struct B { virtual R get() const; };
struct C : P, B { R get() const; };
R C::get() const { return R(); }
