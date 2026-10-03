# OpenCode tick 2026-08-25 — handoff pour Duy Tra / prochaine session

Pipeline : next_targets.py -> local_score.py (host) -> bank_safe.py.
CI : flags -m64 -O2 -fno-exceptions -fno-rtti -fno-crossjumping -falign-* -c ; bytematch GCC_FLAGS == local.

## Wins (100%, bancalises)
- 0x73e350 LoadStat_unregisterLoadCallback -> PR #30823 MERGED (100% both)
- 0x4a22e0 Player_toggleFreeCameraEnabled -> cracke independamment, merge par Duy Tra entre-temps (preuve du selecteur next_targets)
- 0x785590 AIObjectCover_getPortalVertex -> PR #30826 (100% both)
- 0x7855e0 AIObjectCover_getPortal (twin) -> PR #30826 (100% both)

## Near-miss a ~1-2 instructions (fichiers .cpp pret a l'emploi ici)
- 0x642c50 SimpleTokenizer_mid 92.9% : residu unique = polarite JA/JB apres normalisation des operandes CMP ; essayer `if (len < pos)` / variable intermediaire `unsigned long L = *(ulong*)(*(char**)str-0x18)`.
- 0x77f590/0x770b20 retireAsCommander/respawnBot 91.7% : sched2 - PUSH RBX avant/apr'es le premier load global ; essayer fichier avec pad/filler AVANT la fonction (TRICK 50 TU-context).
- 0x4a41b0 triggerSpecialGameEvent 91.7% : DEC ESI;JE (compare==1 valeur morte). Essayer `unsigned int t = (unsigned int)type; if (t == 1)`.
- 0x71c830 addEdgeIndex 97.6% (34) : derniere ligne = reload `MOV RSI,[RDI+8]` apres le store ; structure source exacte = store via pointeur, increment via RELECTURE memoire + ADD en place.
- 0x50e0b0/0x50dd90 AreaObjectTemplate dtors 88.9% (34) : loop-empty: JE vs JNE (ecrire boucle avec break) ; base dtor tail.
- 0x73e8b0/0x73e900 MD5String operator ne 81% (40) : epilogue partage, JMP dans le suffixe = non reproductible sous -fno-crossjumping (classe documentee).
- 0x42c3e0 PostRemoteEvent 51% : temps a re-investir (triple deref global EM + tail 3 args).

## Lecons (deja poussees dans le skill vault)
1. lire-dans-variable avant XOR -> pas de narrowing SIL (0x4a22e0, la variante qui gagne).
2. normalizer CMP fusionne les operandes, seul JA/JB reste -> jouer avec la direction de la comparaison.
3. ordre des declares de constantes float = ordre des MOVSS du select SSE.
4. epilogues fusionnes sous -fno-crossjumping = classe plateau si le target a un suffixe partage (MOV EAX,EDX+restore) et que GCC duplique.
5. vector push: increment vs LEA: ecrire l'assignation depuis la base d'origine.

## Update session apres (veine plateau setArgFromString)
0x84f630 (seed 98.1%, ~100 twins plateau): corps reproduit, RESTE = prologue a 3 regs (r12 hoiste du LEA base+0x60 traversant le call locale) vs 2 regs cibles. Deux variantes testees (base var / litterale), meme score 44.9% (le diff ne tient qu'au prologue + la ligne MOV RBX,RDI). Piste suivante: simuler le dtor via la hierarchie reelle TRICK 51 (istringstream -> basic_ios heritage virtuel) pour reproduire le VTT juggling avec le codegen natif.
0x71c830: reload en volatile = 90% (GCC CSE sa propre ecriture). Piste: helper noinline pour la relecture.

## MAJ finale session : etat des fichiers a continuer
- 0x678350 StatsManager_disconnect : 97.7% (40), 1 ligne restante : MOV RDI,RBX debit par GCC avant le tail-jmp (target saute sans recharger rdi -> le callee preserve rdi). PAS DE SOLUTION TROUVEE (gcc re-materialise l'arg). Fichier 0x678350.cpp propre.
- 0x770cd0 BFGameEffector dtor : 84.4% (34) avec for-loop; break-loop pire. Residu: epilogue duplique (crossjumping).
- 0x50e0b0/0x50dd90 AreaObjectTemplate dtors : 88.9% (34) for-loop, 81.8% break. Residu: JE/JNE loop-empty + duplication epilogue.
- 0x56d100 Zipline : 53.9% (structure vtable divergente: fd8 1-arg OK mais le reste des appels ne matche pas; a refaire avec ASM 0x56d100 en main).
- 0x631080 getTorque : intrinsic SSE ANDPS = 29.8%; le minss/ucomiss coule. Le chemin CLIEN (temp) = plateau.
- 0x84f630 seed setArgFromString COW : corps OK, prologue 3 regs (r12 hoist base+0x60). Wrapper always_inline compile fail (3.4). Piste: TRICK 51 hierarchie reelle istringstream.
