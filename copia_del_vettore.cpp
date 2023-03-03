//Includo le librerie
#include <iostream>
#include <ctime>
#include <cstdlib>
#include <algorithm>

int ORG_ARR[100]; //Variabili globali
int DP_ARR[100];

void randm() //Prima funzione 
{

srand(time(NULL)); //inizializzo il seme

int rand; //inizializo una variabile d'appoggio 

for(int i = 0; i < 100; i++)
{
    rand = std::rand() % 1000 + 1; //randomizzo i numeri
    ORG_ARR[i] = rand; //Copio uno ad uno i numeri nel array usando i per dire dove inserire il numero nel array
}


}

void array_dupe()//Seconda funzione
{

std::copy(std::begin(ORG_ARR), std::end(ORG_ARR), std::begin(DP_ARR));//Duplico l'array 

}

int main()//Terza funzione
{
randm();//Chiamo la prima funzione
array_dupe();//Chiamo la seconda funzione 
for (int i = 0; i < 100; i++)
{
  std::cout << DP_ARR[i] << ","; //Faccio uscire a schermo l'array duplicato 
}

return 0;
}