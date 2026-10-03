# PROJECT_CONTEXT

La constitution du projet : ce qui ne change pas. Les invariants, le but, la
definition du corpus et les regles qui tiennent d'une session a l'autre. Le
protocole de session (ce qu'un agent fait a chaque reprise) est dans
[CLAUDE.md](CLAUDE.md) ; le savoir de reverse dans [docs/](docs/).

## But

Reconstruire le code source C++ du serveur BF2 Linux (`bf2_l64.x86`) fonction par
fonction, de sorte que **le source, recompile avec le compilateur d'epoque,
ressorte octet pour octet identique au binaire**. C'est un projet de
decompilation *matching*, comme ceux de decomp.dev : la preuve d'une fonction
n'est pas qu'elle "a l'air juste", c'est qu'elle byte-matche.

## Le corpus

- **44 153 fonctions cibles** (`dice_*`). C'est le denominateur fixe. Sa
  composition et les exclusions sont dans [docs/measurement.md](docs/measurement.md).
- **Le binaire de reference est mixte GCC 3.4.6 / 4.0.3.** `~/bf2-bin/amd-64/bf2`,
  18 108 271 octets, sha256
  `b60c1d055437daaad51603f2ffa7cacab71c6502cdd9c8011887e64ed19e1719`
  (avec `SHA256SUMS` et README). `bf2_binimage.BINARY` prend `$BF2_BINARY`,
  sinon ce chemin. Ne jamais epingler un compilateur en aveugle : on essaie les
  deux, confirme-d'abord.
- **`~/re-bf2` est mort mais heberge une entree vivante** et ne doit pas etre
  supprime : l'export Ghidra brut
  (`~/re-bf2/ghidra-ai-bridge/.ghidra-exports/`, 308 Mo, lu par
  `class_layout.py` et `bf2/index/ghidra_export.py` ; la version SQLite
  `/opt/bf2-re-db/ghidra_cache.db` est ce que lit la plupart des outils).

## Comment une fonction est prouvee (invariant)

1. Le source C++ est compile par `bf2-gcc:3.4` (ou 4.0) avec les flags du projet
   (`g++ -m64 -O2 -fno-exceptions -fno-rtti -c`).
2. La sortie est byte-matchee contre le binaire, **par symbole emis**, avec le
   masque d'octets du chemin de score (`objdump -d -r`). Voir
   [docs/measurement.md](docs/measurement.md).
3. `validate.yml` recompile et re-verifie **independamment** chaque fichier a
   100% avant de merger sur `main`. Une PR ouverte sans surveillance ne peut
   donc rien faire entrer de faux.

Ce gate est la seule chose qui rend la position "agent + verification" defendable.
Il ne se contourne pas.

## La mesure (invariant)

Deux chiffres, un seul honnete : **58,93 % des octets** (le chiffre de reference,
il dit ou est le travail) et 91,88 % des fonctions (gonfle par les accesseurs).
Toujours citer le chiffre octets. Une seule source, `report.json` (objdiff
report v2) ; ne jamais recalculer la progression autrement. Toute modification du
chemin de score doit re-mesurer avant/apres et expliquer tout ecart > 2 points.
Details : [docs/measurement.md](docs/measurement.md).

## Regles qui ne changent jamais

- **Pas d'`asm()` inline dans un candidat `recovered/`, jamais.** Trouver une
  orthographe C++ pure. Un match atteint par cast absurde, registre epingle,
  `naked` ou `noreturn` truque est un faux match ; `fakematch-lint` le refuse.
- **`bf2/core/bank.py` est le seul chemin vers `recovered/`.** Jamais de commit a la
  main dans `recovered/`.
- **Une PR par chantier**, branche `tool/<n>-<slug>` pour l'outillage,
  `re/<...>` pour les recouvrements. Merge `--squash --admin` apres CI verte.
- **Hygiene de commit (verifiee par `ci-guard` commit-hygiene)** : zero emoji,
  pas d'em-dash, pas de `Co-Authored-By`, aucune mention d'IA/LLM/Claude dans les
  commits ni les corps de PR.
- **Une PR qui ne touche pas `recovered/`** est fermee automatiquement ; pour un
  changement `bf2/`/`docs/`, merger dans la foulee (`--squash --admin`) ou
  pousser sur `main`.
- **Toute PR qui touche `.github/workflows/ci-guard.yml`** declenche `scope-guard`
  (allowlist : `recovered/`, `.github/`, `bf2/`, `tests/`, `lint.toml`,
  `CLAUDE.md`) et `author-identity` ; etendre l'allowlist dans le meme diff si on
  ajoute un fichier hors liste.
- **Corpus et DB derivees dans `/opt/bf2-re-db/`, jamais dans le repo.** Les
  docs de projet (design, audits, plans, sessions) vivent dans le vault
  (`dev/projects/bf2-reverse/`), pas dans ce repo qui reste public-ready. Seuls
  la gouvernance operationnelle (ce fichier, `CLAUDE.md`, `AGENTS.md`) et le
  savoir de reverse (`docs/`) vivent ici.

## Structure du repo

```
bf2-reverse/
  PROJECT_CONTEXT.md    cette constitution
  CLAUDE.md             protocole de session
  AGENTS.md             la liste premier-tick
  docs/
    matching-cookbook.md  idiomes GCC 3.4/4.0 par symptome de residu
    tools.md              index de l'outillage
    measurement.md        politique de mesure, le masque, l'invariant
    progress.svg          carte de progression (regeneree)
  bf2/                  le paquet Python ; `python3 -m bf2` (shim `bf2`) est l'entree
    core/               le chemin de preuve : normalisation, compile, score, banque, lint
    index/              les bases derivees : index recouvre, binmeta, blocks, plateau, Ghidra
    engines/            les generateurs sans modele, un par famille
    search/             affinage et recherche sur les near-miss
    report/             report.json, carte, tables du README, synchro console
    ops/                watchdog Duy Tra, bail de travail, juge independant
    console/            la console web
    classes/            assembleur et gates du track classes
  native/               Go : bf2-seqmatch, le diff des grosses fonctions (meme resultat que difflib)
  deploy/               images (console, gcc 3.4/4.0), scripts Ghidra
  donors/               sources C++ des idiomes synthetises (bf2 donors)
  classes/              track reconstruction de classe (un header par classe, baselines)
  recovered/            code C++ valide 100% byte-match (un fichier par fonction)
  attempts/             meilleurs candidats echoues, gardes pour retry
  .github/workflows/    validate, ci-guard, ci, refresh-readme, progress-map...
```

## Historique

Le pipeline d'origine (GitHub Actions + LLM opencode/DeepSeek : `reverse.yml`,
`watchdog.yml`, `opencode-deploy.yml`, `scripts/opencode-docker/`) a ete
**supprime du repo le 2026-09-12** (dormant depuis 2026-07-12). Le travail actif
est la boucle deterministe + agent decrite dans [CLAUDE.md](CLAUDE.md). Les
notes de conception, audits et sessions de cette periode sont archives dans le
vault sous `dev/projects/bf2-reverse/`.
