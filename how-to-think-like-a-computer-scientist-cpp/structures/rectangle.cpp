/*
 * todo: it can use header file to reuse point structure. but how?
 */
struct Point {
    double x, y;
};

struct Rectangle {
    Point corner;
    double width,height;
};

void initializesTheInstanceVariables() {
    Point corner = {3.0, 4.0};
    Rectangle box = {corner, 100.0, 200.0};
}

void nestedStructure() {
    Rectangle box2 = {{3.0, 4.0}, 100.0, 200.0};
}

/*
 * Structures as return type
 */
Point findCenter(Rectangle &box) {
    double x = box.corner.x + box.width / 2;
    double y = box.corner.y + box.height / 2;
    Point result = {x, y};
    return result;
}
