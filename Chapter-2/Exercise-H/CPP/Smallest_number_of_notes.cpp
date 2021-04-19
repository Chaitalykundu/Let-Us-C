/* Author : Chaitaly Kundu
Date: 19-04-21 */

/* Consider a currency system in which there are notes of seven denominations, namely rs 1, rs 2, rs 5, rs 10 rs 50, rs 100.
   Sum of rs N is entered through the key board.
   WAP to compute the smallest number of notes  that will combine to give rs N */


#include<bits/stdc++.h>
#include<math.h>

using namespace std;

int main()
{
    int n, note_of_hundred, note_of_fifty, note_of_ten, note_of_five, note_of_two, note_of_one, total_notes;

    cout << "Enter the amount: ";
    cin >> n;

    // Calculate the notes of 100
    note_of_hundred =n / 100;
    n = n % 100;

    // Calculate the notes of 50
    note_of_fifty = n / 50;
    n = n % 50;

    // Calculate the notes of 10
    note_of_ten = n / 10;
    n = n % 10;

    // Calculate the notes of 5
    note_of_five = n / 5;
    n = n % 5;

    // Calculate the notes of 2
    note_of_two = n / 2;
    n = n % 2;

    // Calculate the notes of 1
    note_of_one = n / 1;
    n = n % 1;

    // Calculate smallest number of notes needed
    total_notes = note_of_hundred + note_of_fifty + note_of_ten + note_of_five + note_of_two + note_of_one;

    cout << "Smallest number of notes needed: " << total_notes;
    return 0;
}
