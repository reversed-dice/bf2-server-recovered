// FUNCTION: BF2 0x49fd30
namespace dice { namespace hfe {

class ServerInfo {
public:
    char _pad[0x40];
    int m_radioSpamInterval;
};

extern ServerInfo* serverInfo;

class WorldPref {
public:
    static double getWorldTime();
};

class Player {
public:
    virtual void _v000() = 0;
    virtual void _v001() = 0;
    virtual void _v002() = 0;
    virtual void _v003() = 0;
    virtual void _v004() = 0;
    virtual void _v005() = 0;
    virtual void _v006() = 0;
    virtual void _v007() = 0;
    virtual void _v008() = 0;
    virtual void _v009() = 0;
    virtual void _v010() = 0;
    virtual void _v011() = 0;
    virtual void _v012() = 0;
    virtual void _v013() = 0;
    virtual void _v014() = 0;
    virtual void _v015() = 0;
    virtual void _v016() = 0;
    virtual void _v017() = 0;
    virtual void _v018() = 0;
    virtual void _v019() = 0;
    virtual void _v020() = 0;
    virtual void _v021() = 0;
    virtual void _v022() = 0;
    virtual void _v023() = 0;
    virtual void _v024() = 0;
    virtual void _v025() = 0;
    virtual void _v026() = 0;
    virtual void _v027() = 0;
    virtual void _v028() = 0;
    virtual void _v029() = 0;
    virtual void _v030() = 0;
    virtual void _v031() = 0;
    virtual void _v032() = 0;
    virtual void _v033() = 0;
    virtual void _v034() = 0;
    virtual void _v035() = 0;
    virtual void _v036() = 0;
    virtual void _v037() = 0;
    virtual void _v038() = 0;
    virtual void _v039() = 0;
    virtual void _v040() = 0;
    virtual void _v041() = 0;
    virtual void _v042() = 0;
    virtual void _v043() = 0;
    virtual void _v044() = 0;
    virtual void _v045() = 0;
    virtual void _v046() = 0;
    virtual void _v047() = 0;
    virtual void _v048() = 0;
    virtual void _v049() = 0;
    virtual void _v050() = 0;
    virtual void _v051() = 0;
    virtual void _v052() = 0;
    virtual void _v053() = 0;
    virtual void _v054() = 0;
    virtual void _v055() = 0;
    virtual void _v056() = 0;
    virtual void _v057() = 0;
    virtual void _v058() = 0;
    virtual void _v059() = 0;
    virtual void _v060() = 0;
    virtual void _v061() = 0;
    virtual void _v062() = 0;
    virtual void _v063() = 0;
    virtual void _v064() = 0;
    virtual void _v065() = 0;
    virtual void _v066() = 0;
    virtual void _v067() = 0;
    virtual void _v068() = 0;
    virtual bool getIsCommander() = 0;
    virtual void _v070() = 0;
    virtual void _v071() = 0;
    virtual void _v072() = 0;
    virtual void _v073() = 0;
    virtual void _v074() = 0;
    virtual void _v075() = 0;
    virtual void _v076() = 0;
    virtual void _v077() = 0;
    virtual void _v078() = 0;
    virtual void _v079() = 0;
    virtual void _v080() = 0;
    virtual void _v081() = 0;
    virtual void _v082() = 0;
    virtual void _v083() = 0;
    virtual void _v084() = 0;
    virtual void _v085() = 0;
    virtual void _v086() = 0;
    virtual void _v087() = 0;
    virtual void _v088() = 0;
    virtual void _v089() = 0;
    virtual void _v090() = 0;
    virtual void _v091() = 0;
    virtual void _v092() = 0;
    virtual void _v093() = 0;
    virtual void _v094() = 0;
    virtual void _v095() = 0;
    virtual void _v096() = 0;
    virtual void _v097() = 0;
    virtual void _v098() = 0;
    virtual void _v099() = 0;
    virtual void _v100() = 0;
    virtual void _v101() = 0;
    virtual void _v102() = 0;
    virtual void _v103() = 0;
    virtual void _v104() = 0;
    virtual void _v105() = 0;
    virtual void _v106() = 0;
    virtual void _v107() = 0;
    virtual void _v108() = 0;
    virtual void _v109() = 0;
    virtual void _v110() = 0;
    virtual void _v111() = 0;
    virtual void _v112() = 0;
    virtual void _v113() = 0;
    virtual void _v114() = 0;
    virtual void _v115() = 0;
    virtual void _v116() = 0;
    virtual void _v117() = 0;
    virtual void _v118() = 0;
    virtual void _v119() = 0;
    virtual void _v120() = 0;
    virtual void _v121() = 0;
    virtual void _v122() = 0;
    virtual void _v123() = 0;
    virtual void _v124() = 0;
    virtual void _v125() = 0;
    virtual void _v126() = 0;
    virtual void _v127() = 0;
    virtual void _v128() = 0;
    virtual void _v129() = 0;
    virtual void _v130() = 0;
    virtual void _v131() = 0;
    virtual void _v132() = 0;
    virtual void _v133() = 0;
    virtual void _v134() = 0;
    virtual void _v135() = 0;
    virtual void _v136() = 0;
    virtual void _v137() = 0;
    virtual void _v138() = 0;
    virtual void _v139() = 0;
    virtual void _v140() = 0;
    virtual void _v141() = 0;
    virtual void _v142() = 0;
    virtual void _v143() = 0;
    virtual void _v144() = 0;
    virtual void _v145() = 0;
    virtual void _v146() = 0;
    virtual void _v147() = 0;
    virtual void _v148() = 0;
    virtual void _v149() = 0;
    virtual void _v150() = 0;
    virtual void _v151() = 0;
    virtual void _v152() = 0;
    virtual void _v153() = 0;
    virtual void _v154() = 0;
    virtual void _v155() = 0;
    virtual void _v156() = 0;
    virtual void _v157() = 0;
    virtual void _v158() = 0;
    virtual void _v159() = 0;
    virtual void _v160() = 0;
    virtual void _v161() = 0;
    virtual void _v162() = 0;
    virtual void _v163() = 0;
    virtual void _v164() = 0;
    virtual void _v165() = 0;
    virtual void _v166() = 0;
    virtual void _v167() = 0;
    virtual void _v168() = 0;
    virtual void _v169() = 0;
    virtual void _v170() = 0;
    virtual void _v171() = 0;
    virtual void _v172() = 0;
    virtual void _v173() = 0;
    virtual void _v174() = 0;
    virtual void _v175() = 0;
    virtual void _v176() = 0;
    virtual void _v177() = 0;
    virtual void _v178() = 0;
    virtual void _v179() = 0;
    virtual void _v180() = 0;
    virtual void _v181() = 0;
    virtual void _v182() = 0;
    virtual void _v183() = 0;
    virtual void _v184() = 0;
    virtual void _v185() = 0;
    virtual void _v186() = 0;
    virtual void _v187() = 0;
    virtual void _v188() = 0;
    virtual void _v189() = 0;
    virtual void _v190() = 0;
    virtual void _v191() = 0;
    virtual void _v192() = 0;
    virtual void _v193() = 0;
    virtual void _v194() = 0;
    virtual void _v195() = 0;
    virtual void setRadioSpamFlagCount(int v) = 0;
    virtual int getRadioSpamFlagCount() = 0;
    virtual void setRadioSpamBlockedFlagCount(int v) = 0;
    virtual int getRadioSpamBlockedFlagCount() = 0;
    virtual void setRadioSpamFilterFlagTimer(float v) = 0;
    virtual float getRadioSpamFilterFlagTimer() = 0;
    virtual void _v202() = 0;
    virtual void _v203() = 0;
    virtual void _v204() = 0;
    virtual void _v205() = 0;
    virtual void _v206() = 0;
    virtual void _v207() = 0;
    virtual void _v208() = 0;
    virtual void _v209() = 0;
    virtual void _v210() = 0;
    virtual void _v211() = 0;
    virtual void _v212() = 0;
    virtual void _v213() = 0;
    bool getIsThisASpam(bool isRadio);
};

bool Player::getIsThisASpam(bool isRadio)
{
    int limit = serverInfo->m_radioSpamInterval;
    if (getIsCommander())
        limit *= 2;

    int count = getRadioSpamFlagCount();
    bool isSpam = limit <= count;
    if (isSpam) {
        if (getRadioSpamBlockedFlagCount() == 0)
            setRadioSpamFilterFlagTimer((float)WorldPref::getWorldTime());
        setRadioSpamBlockedFlagCount(getRadioSpamBlockedFlagCount() + 1);
    } else if (isRadio) {
        if (getRadioSpamFilterFlagTimer() < 0.0f)
            setRadioSpamFilterFlagTimer((float)WorldPref::getWorldTime());
        setRadioSpamFlagCount(getRadioSpamFlagCount() + 1);
    }
    return isSpam;
}

} }
