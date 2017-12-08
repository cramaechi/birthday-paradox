//Program approximates the probability of two people sharing the same birthday in
//a room of 2 to 50 people.
#include <iostream>
#include <cstdlib>
#include <cmath>
#include <ctime>
using namespace std;

double birthdayProbability(int people[], int numberOfPeople);
//Precondition: numberOfPeople >= 2 && <= 50.
//Postcondition: Returns the probability of two people out of numberOfPeople will
//have the same birthday.

void findIdenticalBirthDates(int people[], int numberOfPeople, int targetIndex, int& count, int& stop);
//Precondition: The array people has been partially filled. numberOfPeople >= 2 && <= 50.
//targetIndex >= 0 && <= numberOfPeople. Both stop and count has been initialized.
//Postcondition: Increments count and assigns stop -1, if two elements of the array people have
//the same value.

void output(int people[], int size);
//Precondition: size == 50.
//Prints the probability of two people having the same birthday in a room
//of 2 - 50 people.

const int NUMBER_OF_PEOPLE = 50;

int main()
{
    srand(time(NULL));
    int p[NUMBER_OF_PEOPLE];

    output(p, NUMBER_OF_PEOPLE);

    return 0;
}

double birthdayProbability(int people[], int numberOfPeople)
{
    int count = 0;
    int stop = 0;

    for (int i =  1; i <= 5000; i++)
    {
        for (int j = 0; j < numberOfPeople; j++)
            people[j] = rand() % 365 + 1;

        for (int k = 0; stop != -1 && k < numberOfPeople; k++)
            findIdenticalBirthDates(people, numberOfPeople, k, count, stop);

        stop = 0;
    }

    return count/5000.0;
}

void findIdenticalBirthDates(int people[], int numberOfPeople, int targetIndex, int& count, int& stop)
{
    for (int i = numberOfPeople - 1; i > targetIndex; i--)
    {
        if (people[i] == people[targetIndex])
        {
            stop = -1;
            ++count;
            break;
        }
    }
}

void output(int people[], int size)
{
    cout.setf(ios::showpoint);
    cout.setf(ios::fixed);
    cout.precision(4);

    for (int i = 2; i <= size; i++)
        cout<<"For "<<i<<" people, the probability of two birthdays is, "<<birthdayProbability(people, i)<<"\n\n";
}

