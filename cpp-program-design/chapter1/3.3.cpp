void main() {
    int x = 58, y = 98, z = 55;
    int *const p = &x;
    *p = 65;
    p = &y;
    x = *p;
}
