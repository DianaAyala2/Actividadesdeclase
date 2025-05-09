#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int score;
    char note;
    cout << "Hi:), please enter your final grade (0-100): " << endl;
    cout << "grade: ";
    cin >> score;

    if (score >= 90 && score<=100)
    {
        note='A';
        cout << "Congrats!, you have: " << note<<endl;
    }
    else if (score >= 85 && score < 90)
    {
        note='B';
        cout << "Congrats!, you have a: " <<note <<endl;
    }
    else if (score >= 80 && score <85)
    {
        note='C';
        cout << "Congrats!, you have a: " << note <<endl;
    }
    else if (score >= 70 && score < 80)
    {
        note='D';
        cout << "Congrats!, you have a: " << note <<endl;
    }
    else if (score==69) 
    {
        note='E';
        cout << "You have a: " << note <<endl;
    }
    else if (score >= 0 && score < 69)
    {
        note='F';
        cout << "You have a: " << note <<endl;

    } else {
        cout <<"The score that you entered is not valid."<<endl;
    
    return 1;
}

    switch (note)
    {

    case 'A':
    {
        cout << "Congrats!, you have an excellent note"<<endl;
    }
        for (int i = 0; i < 1; i++)
        {
            cout << " keep it up :)!"<<endl;
        }
        break;
    case 'B':
    {
        cout << "Congrats!, you have a very, very good note"<<endl;
    }
        for (int i = 0; i < 1; i++)
        {
            cout << " keep it up :)!"<<endl;
        }
        break;
    case 'C':
    {
        cout << "You have a very good note. "<<endl;
    }
        for (int i = 0; i < 1; i++)
        {
            cout << " keep it up :)!"<<endl;
        }
        break;
    case 'D':
    {
        cout << "You have a good note"<<endl;
    }
        for (int i = 0; i < 1; i++)
        {
            cout << " keep it up :)!"<<endl;
        }
        break;
    case 'E':
    {
        cout << "Your grade is low"<<endl;
    }
        for (int i = 0; i < 1; i++)
        {
            cout << "Don't give up :)!"<<endl;
        }
        break;
    case 'F':
    {
        cout << "Your grade is very low. "<<endl;
    }
        for (int i = 0; i < 1; i++)
        {
            cout << "Don't give up :)!"<<endl;
        }
        break;

        default:
        cout << "An error has occurred :("<<endl;
    }
    return 0;
}