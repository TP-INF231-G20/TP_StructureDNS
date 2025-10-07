Contribution aux TP INF 231
Exercice 5:Tester si un tableau est trié:
Dans ce cas, le test est porté sur un tableau pour s'assurer qu'il est trié en ordre croissant.
Le programme lit les valeurs entières du tableau de taille "n" entrées par l'utilisateur.
Ensuite, une variable "trie" de type "bool" est créée et sa valeur initialisée à "true".
Une boucle "for" qui parcourt jusqu'à l'avant-dernier élément du tableau est associée à une structure conditionelle "if"  qui donne la valeur de "false" à "trie" si l'élément  à l'indice actuel est plus grand que son successeur dans le tableau.
Finalement, une structure conditionnelle "if" est utilisée pour évaluer la valeur de trie. Si elle est "true", le tableau est trié, sinon le tableau n'est pas trié.
Exercice 6:Calcul de la Médiane d'un Tableau:
Le programme lit les valeurs entières du tableau de taille n entrées par l'utilisateur.
Puisque le calcul de la médiane se fait sur une série triée, le tableau est trié en utilisant l'algorithme du Tri à Bulles.
Pour le calcul de la médiane, une structure conditionnelle ("if") est utilisée pour évaluer si n (la taille du tableau) est impair ou pair.
Si n est impair, alors la médiane sera l'élément placé à l'indice du milieu. Cet indice est obtenu par la partie entière de la division "n/2"
Si n est pair, la médiane est la moyenne des deux éléments centraux. Ces deux éléments sont situés aux indices "n/2 "et "(n/2) -1".