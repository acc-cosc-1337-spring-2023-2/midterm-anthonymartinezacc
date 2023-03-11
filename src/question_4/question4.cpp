string transcribe_dna_to_rna(const string& dna) {
    string rna = dna;
    for (char& c : rna) {
        if (c == 'T') {
            c = 'U';
        }
    }
    return rna;
}


