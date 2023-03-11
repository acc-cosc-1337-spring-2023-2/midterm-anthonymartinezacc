#include <iostream>
#include <string>
using std::cout; using std::cin;
using std::string;

int main() {
    string dna;
    //string dna = "GATGGAACTTGACTACGTAAATT";
    cout << "enter a valid DNA string (only has characters 'A' 'T' 'G' & 'C'): ";
    cin >> dna;
    string rna = transcribe_dna_to_rna(dna);
    cout << rna << std::endl;
    return 0;
}
