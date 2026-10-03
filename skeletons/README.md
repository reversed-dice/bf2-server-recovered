# skeletons/

Workspace de travail partiel sur les fonctions trop grosses ou trop dures
pour etre ecrites en un seul jet. Un fichier ici est un candidat INCOMPLET
par nature : il peut contenir des bouts de C++, des commentaires ASM annotes,
des marqueurs UNKNOWN. Il ne sera JAMAIS valide par la CI (validate.yml et
ci-guard.yml ne regardent que `recovered/**`), il n'est jamais banque tel
quel, et il ne doit pas etre merge dans `recovered/` tant que `bf2 try`
ne score pas 100%.

## Regles

- Un fichier par adresse : `0xADDR__nom.cpp`.
- Tout morceau de C++ doit etre marque compilable ou non. Convention de
  marqueurs, lus par personne d'autre que l'auteur mais stables :
  - `// OK:` devant une ligne qui compile et score,
  - `// WIP:` devant une ligne qui compile mais ne matche pas encore,
  - `// TODO:` devant un trou (semantique inconnue),
  - l'ASM cible non traduit se colle en commentaire avec l'adresse :
    `// 0x41088b CMP BYTE PTR [0X1089DA2],0X0`.
- Aucun `asm()` inline, meme ici : la regle du projet est un reflexe, pas
  une option de dossier.
- Ce dossier est un workspace de reprise, pas une archive : un fichier dont
  l'adresse est recuperee ailleurs est supprime.

## Usage

La boucle de travail sur une grosse fonction :

1. `bf2 next 0xADDR` (ou `bf2 slice 0xADDR`) pour le decoupage en blocs.
2. Ecrire le squelette ici, bloc par bloc, en marquant l'avancement.
3. Des que quelques blocs sont ecrits : `bf2 slice 0xADDR N fichier.cpp`
   pour scorer CE bloc, ou `bf2 try` quand la fonction tient en un fichier.
4. A 100% : `bf2 ship` depuis le stage. Le fichier skeletons/ est supprime.

La progression partielle vit ici pour survivre aux fins de session, pas pour
remplacer le staging (`/tmp/bf2-stage` reste le seul chemin vers
`bank_safe`).