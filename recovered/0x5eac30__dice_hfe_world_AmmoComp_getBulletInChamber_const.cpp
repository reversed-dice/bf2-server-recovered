// FUNCTION: BF2 0x5eac30
struct AmmoComp {
    char m_pad[0x28];
    int* m_pBullet;
    bool pad0() const;
    bool pad1() const;
    bool pad2() const;
    bool pad3() const;
    bool pad4() const;
    bool pad5() const;
    bool pad6() const;
    bool getBulletInChamber() const;
};
bool AmmoComp::pad0() const { return *m_pBullet != 0; }
bool AmmoComp::pad1() const { return *m_pBullet != 0; }
bool AmmoComp::pad2() const { return *m_pBullet != 0; }
bool AmmoComp::pad3() const { return *m_pBullet != 0; }
bool AmmoComp::pad4() const { return *m_pBullet != 0; }
bool AmmoComp::pad5() const { return *m_pBullet != 0; }
bool AmmoComp::pad6() const { return *m_pBullet != 0; }
bool AmmoComp::getBulletInChamber() const { return *m_pBullet != 0; }
