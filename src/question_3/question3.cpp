int roll_die() {
    std::srand(std::time(nullptr));
    return std::rand() % 6 + 1;
}
