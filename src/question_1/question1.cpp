int find_ged(int GCDinput1, int GCDinput2) {
    if (GCDinput1 <= 0 || GCDinput2 <= 0 || GCDinput1 > 200 || GCDinput2 > 200) {
        cout << "Error: Invalid input\n";
        return -1;
    }
    int gcd = -1;
    for (int i = 1; i <= GCDinput1 && i <= GCDinput2; ++i) {
        if (GCDinput1 % i == 0 && GCDinput2 % i == 0) {
            gcd = i;
        }
    }
    return gcd;
}
