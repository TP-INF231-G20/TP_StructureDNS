Contribution aux TP INF 231
Exercice 5:Tester si un tableau est tri�:
Dans ce cas, le test est port� sur un tableau pour s'assurer qu'il est tri� en ordre croissant.
Le programme lit les valeurs enti�res du tableau de taille "n" entr�es par l'utilisateur.
Ensuite, une variable "trie" de type "bool" est cr��e et sa valeur initialis�e � "true".
Une boucle "for" qui parcourt jusqu'� l'avant-dernier �l�ment du tableau est associ�e � une structure conditionelle "if"  qui donne la valeur de "false" � "trie" si l'�l�ment  � l'indice actuel est plus grand que son successeur dans le tableau.
Finalement, une structure conditionnelle "if" est utilis�e pour �valuer la valeur de trie. Si elle est "true", le tableau est tri�, sinon le tableau n'est pas tri�.
Exercice 6:Calcul de la M�diane d'un Tableau:
Le programme lit les valeurs enti�res du tableau de taille n entr�es par l'utilisateur.
Puisque le calcul de la m�diane se fait sur une s�rie tri�e, le tableau est tri� en utilisant l'algorithme du Tri � Bulles.
Pour le calcul de la m�diane, une structure conditionnelle ("if") est utilis�e pour �valuer si n (la taille du tableau) est impair ou pair.
Si n est impair, alors la m�diane sera l'�l�ment plac� � l'indice du milieu. Cet indice est obtenu par la partie enti�re de la division "n/2"
Si n est pair, la m�diane est la moyenne des deux �l�ments centraux. Ces deux �l�ments sont situ�s aux indices "n/2 "et "(n/2) -1".