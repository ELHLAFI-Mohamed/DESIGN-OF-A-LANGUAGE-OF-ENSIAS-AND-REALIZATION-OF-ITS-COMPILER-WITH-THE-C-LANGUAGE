Descriptif:
===========

Ce mini compilateur du langage proposé offre une analyse lexicale puis syntaxique de l'ensemble du fichier test.txt situé sur le meme répertoire. Durant l'analyse lexicale le programme constitue une liste chainée des tokens qui vont être traité lors de la phase analyse syntaxique.

Le programme passe d'une phase à une autre qu'après avoir 0 erreur dans chaque phase d'analyse, ceci dit on ne passe du lexical au syntaxique que lorsqu'on aurait aucune erreur lexicale pour cerner et corriger les erreurs au fur et à mesure lors de la compilation.

le résultat obtenu à la fin de l'execution est offert par un nombre et la ligne d'erreur s'il y a lieu avec un message de confirmation de ce-ci.

execution:
==========

le programme peut être compilé et executé dans sa totalité par la commande:
----------------------------------------------------------------------------

     gcc -Wall main.c lex.c syn.c -o main
puis
----
    ./main
