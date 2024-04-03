int search(int array[], int target, int size) {
    for (int i = 0; i < size; ++i) {
        if(array[i] == target)
            return i;
        if(array[i] > target)
            return -1;
    }
    return -1;
}

int main() {

    int arraySorted[] = {};
    int size = 5;
    int target = 3;
    int index = search(arraySorted,target,size);

}
