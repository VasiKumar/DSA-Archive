#include <iostream>
using namespace std;

typedef struct employee
{
    /* data */
    int eId;
    char favChar;
    float salary;
} ep; //typedef --{----shit------ } ep gave the new name ep to "struct employee"

int main() {
    ep basi;
    struct employee subh;
    struct employee jay;
    basi.eId=1;
    basi.favChar='C';
    basi.salary=100000;

    cout<<"The information about Vasi is: "<<basi.eId<<endl;
    cout<<"The information about Vasi is: "<<basi.favChar<<endl;
    cout<<"The information about Vasi is: "<<basi.salary<<endl;
    return 0;
}
