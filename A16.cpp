#include "Mylib.h"

int main()
{
    int a, b, k = 0;
    cout<< "Įveskite intervalą iš kurio išrinksime pirminius dvynius skaicius: "; 
    cin >> a;
    cin >> b;
    int P[b - a] = {0};
    
    for(int i = a; i <= b; i++) //ieškome pirminių skaičių;
    {
        if(i == 1 || i == 2) continue;
        int c=0;
        for(int j = 2; j < b; j++)
        {
            if(i%j == 0)
            {
                c++;
            }
        }

        if(c == 1 || c == 0) //jei pirminis - saugome masyve;
        {
            P[k] = i;
            k++;
        }
       
    }
    
    for(int i = 0; i < k; i++) //Ciklas tikrinantis, ar skaičių pora yra pirminiai dvyniai;
    {
        if(abs(P[i] - P[i+1]) == 2)
        {
            cout << "(" << P[i] << ";" << P[i+1] << ")" << endl;
        }

    }
    


}