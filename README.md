
## Valeur fixe vs virgule flottante

En C++, les types de données "valeur fixe" (fixed-point) et "float" (virgule flottante) sont deux concepts différents pour représenter des nombres réels.

Les valeurs fixes sont utilisées pour représenter des nombres réels avec une précision fixe après la virgule. Elles sont souvent utilisées dans des applications où une précision absolue est requise, telles que la finance ou la manipulation de données monétaires. Les valeurs fixes sont généralement représentées en utilisant des entiers et une échelle fixe pour déterminer la position de la virgule. Par exemple, un nombre fixe avec une échelle de 2 peut représenter des valeurs comme 3.14 ou 123.45.

D'autre part, les nombres à virgule flottante (float) sont utilisés pour représenter des nombres réels avec une précision relative. Les nombres à virgule flottante sont stockés sous forme binaire dans la mémoire de l'ordinateur en utilisant une représentation normalisée appelée "norme IEEE 754". Les nombres à virgule flottante sont plus flexibles en termes de plage de valeurs possibles et peuvent représenter des nombres beaucoup plus grands ou beaucoup plus petits par rapport aux valeurs fixes. Cependant, en raison de leur représentation binaire, les nombres à virgule flottante peuvent rencontrer des problèmes de précision dans certains calculs, ce qui peut entraîner des erreurs d'arrondi.

En résumé, les valeurs fixes offrent une précision fixe après la virgule, tandis que les nombres à virgule flottante offrent une précision relative et une plage de valeurs plus étendue. Le choix entre les deux dépend des besoins spécifiques de l'application. Si une précision absolue est requise, les valeurs fixes peuvent être préférables. Si une plus grande plage de valeurs et une précision relative sont plus importantes, les nombres à virgule flottante peuvent être utilisés.

## Point fixe

Supposons que nous utilisions une représentation en point fixe de 8 bits avec 4 bits pour la partie entière et 4 bits pour la partie fractionnaire. Dans ce cas, le nombre 3,75 serait représenté comme suit :

Partie entière (3) : 0011
Partie fractionnaire (0,75) : 1100

En combinant ces deux parties, la représentation en point fixe de 3,75 serait : 0011.1100.

La position de la virgule dans la représentation dépend de la convention choisie. Dans cet exemple, nous avons convenu que les 4 premiers bits sont réservés pour la partie entière, suivis de la virgule, puis des 4 bits restants pour la partie fractionnaire.

Il est important de noter que la précision de la représentation en point fixe dépend du nombre de bits alloués pour la partie fractionnaire. Dans cet exemple, avec 4 bits pour la partie fractionnaire, la précision serait de 1/16 (ou 0,0625), ce qui signifie que nous pouvons représenter des nombres avec une précision de 0,0625.

## Différence entre ++i et i++

Les opérateurs `++i` et `i++` sont tous deux des opérateurs d'incrémentation qui augmentent la valeur d'une variable de 1. La différence entre les deux est que `++i` est un opérateur préfixé et `i++` est un opérateur suffixé.

L'opérateur préfixé `++i` incrémente la valeur de la variable, puis renvoie la valeur incrémentée. L'opérateur suffixé `i++` renvoie la valeur de la variable, puis incrémente la valeur de la variable.