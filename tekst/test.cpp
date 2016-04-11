#include <iostream>
#include <string>
#include <fstream> //do wczytywania pliku
using namespace std;


int main ()
{

    fstream reader;
    reader.open ("napis.txt", ios::in);
    if (reader.is_open())
    {
        string line;
        while (getline(reader,line))
        cout<< line<<"\n";
    }
    reader.close();


    fstream writer;
    cout<<endl;
    cout<< "Zapisz� tekst do pliku.\n"<<endl;
    writer.open ("example.txt", ios::out);
    writer<< "Lubi� kwaiatki. \n";
    writer<< "Lubi� bratki.\n";
    writer<< "Nie lubi� marchewki.\n";
    writer.write ( "Kocham s�o�ce", 6);  // zapisze 10 znak�w,
                                         // gdy wezniemy wi�ksz� liczbe ni� mamy znak�w
                                         // to pociagnie kolejne znaki, kt�re ma w pami�ci
    writer<< "\n";
    writer.close();

    fstream apper;
    cout<< "Dopisz� tekst do pliku.\n"<<endl;
    apper.open ("example.txt", ios::out | ios::app);
    apper<< "Dopisa�em to zdanie do pliku.\n";
    apper.close();

    fstream reader1;
    cout<<endl;
    cout<< "Zawarto�� pliku:\n"<<endl;
    reader1.open ("example.txt", ios::in);
    if (reader1.is_open())
    {
        string line;                    //char c;
        while (getline(reader1,line))   //while (reader1.get(c))
        cout<< line<<"\n";              //cout << c;
    }
    reader1.close();
    return 0;
}
