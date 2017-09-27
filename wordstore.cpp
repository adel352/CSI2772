//Nom d'étudiant: Adel Araji
//Numéro d'étudiant: 7897476
//Cours: CSI 27772
//Devoir 1

#include <iostream>
#include <vector>
#include <string>
#include <cmath>

int main()
{
    std::string value;
    std::vector<std::string> vector;
    int iterator = 0;

    std::cout << "Insérez une phrase:  " << std::endl;

    //Loupe qui lit le texte et sauvegarde chaque mot comme un élément dans un vector
    while (std::cin >> value)
    {
        if (value == "stop")
            break;
        vector.insert(vector.begin() + iterator, value);
    }

    //Loupe qui affiche la phrase complète
    for (int i = vector.size() - 1; i >= 0; i--)
    {
        std::cout << vector[i];
        std::cout << " ";
    }
    std::cout << std::endl;


    //Calculer la moyenne des codes ASCII des caractères du mot
    float somme = 0;
    float moyenne = 0;
    float ecartType = 0;
    int count = 0;

    for (int i = vector.size() - 1; i >= 0; i--)
    {
        somme = 0;
        //Calculer la moyenne
        for (int j = 0; j <= vector[i].length() - 1; j++)
        {
            somme += (int)vector[i].at(j);
        }
        moyenne = somme / vector[i].length();

        float firstSumOfS = 0;

        //Calculer l'écart-type
        for (int j = 0; j <= vector[i].length() - 1; j++)
        {
            firstSumOfS += ((int)vector[i].at(j) - moyenne) * ((int)vector[i].at(j) - moyenne);
        }
        ecartType = sqrtf(firstSumOfS / (vector[i].length()-1));

        std::cout << "Moyenne de " << vector[i] << " : " << moyenne << std::endl;
        std::cout << "Écart-type: " << ecartType << std::endl;
    }
    return 0;
} 
