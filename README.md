# Minishell

    Créez votre propre petit Bash et comprenez les processus, signaux et descripteurs de fichiers.

📚 Description

Minishell est une implémentation d'un shell en C permettant d'exécuter des commandes interactives comme Bash, gérer les pipes, redirections, variables d'environnement et signaux.

Il est conçu pour renforcer la compréhension :

    Des processus et signaux

    De la gestion de mémoire

    De la manipulation d’entrées/sorties non bloquantes

    De l’architecture d’un interpréteur de commandes

🚀 Fonctionnalités
Fonctionnalités principales :

✅ Affichage d’un prompt en attente d’une commande
✅ Gestion de l’historique des commandes
✅ Recherche et exécution des exécutables via PATH, absolu ou relatif
✅ Utilisation d’une unique variable globale uniquement pour stocker le signal reçu
✅ Gestion correcte des quotes :

    ' ' : désactive l’interprétation des métacaractères

    " " : désactive sauf pour $ (expansion)

✅ Redirections :

    < : redirection d’entrée

    > : redirection de sortie

    << : heredoc

    >> : redirection en mode append

✅ Gestion des pipes |
✅ Gestion des variables d'environnement ($VAR, $?)
✅ Gestion des signaux :

    Ctrl+C : affiche un nouveau prompt

    Ctrl+D : quitte le shell

    Ctrl+\ : ignoré

✅ Implémentation des builtins :

    echo (avec option -n)

    cd (avec chemin relatif ou absolu)

    pwd

    export

    unset

    env

    exit

⚙️ Compilation

Un Makefile est fourni avec les règles :

    $(NAME), all, clean, fclean, re

Compiler avec :

make

🖥️ Utilisation

Lancer le shell avec :

./minishell

Vous pouvez ensuite :

    Lancer des commandes classiques (ls, cat, etc.)

    Utiliser des pipes (ls | grep minishell)

    Utiliser des redirections (ls > out.txt)

    Tester les builtins (cd, pwd, export VAR=value, etc.)

  🛠️ Prérequis techniques

✅ Projet en C conforme à la norme 42<br>
✅ Pas de fuites mémoire (sauf readline)<br>
✅ Gestion propre des erreurs<br>
✅ Utilisation de libft autorisée<br>
✅ Tests recommandés (non rendus) pour faciliter soutenance et peer-evaluation<br>

📂 Structure du projet<br>


minishell/ <br>
├── Makefile <br>
├── minishell.c <br>
├── parsing/ <br>
├── execution/ <br>
├── utils/ <br>
├── builtins/ <br>
└── includes/ <br>

✅ Évaluation<br>

✅ Respect de la norme<br>
✅ Pas de crash ni comportements indéfinis<br>
✅ Gestion mémoire sans fuites<br>
✅ Fonctionnalités obligatoires opérationnelles<br>
✅ Interaction fluide en mode interactif<br>
📌 Références utiles<br>

    Manuel Bash GNU

    Norme 42

    Man pages (man fork, man execve, man pipe, man dup2)

