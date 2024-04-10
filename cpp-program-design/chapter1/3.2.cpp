void main() {
    int x = 58, y = 98;
    const int *p = &x;
    y = *p;
    *p = 65;
    p = &y;
}
