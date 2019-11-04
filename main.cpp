#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

using namespace std;

string alpha = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
string generateRandomStudent(int length);

struct studentRecord {
    string name = "";
    string id = "";
};

int main() {
    srand(time(0));
    int idLength = 4;
    int nameLength = 8;
    int recordLength = 30;

    studentRecord records[recordLength];
    for (int i = 0; i < recordLength; i++) {
        records[i].name = generateRandomStudent(nameLength);
        records[i].id = generateRandomStudent(idLength);
    }

    for (int i = 0; i < recordLength; i++) {
        cout << records[i].name << endl << records[i].id << endl << endl;
    }

    return 0;
}

string generateRandomStudent(int length) { // Generates a random name/id for each student
    string value = "";
    for (int i = 0; i < length; i++) {
        value = value + alpha[rand()%52];
    }
    return value;
}
