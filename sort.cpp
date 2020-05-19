/**************************************************/
/*              binary_search()関数                */
/*              vectorのkeyが戻り値                 */
/*              vectorライブラリ必要                 */
/**************************************************/
int binary_search(int key , std::vector<int>vector_name) {
    int left = 0, right = vector_name.size() - 1;
    while (right >= left) {
        int mid = left + (right - left) / 2;
        if (vector_name[mid] == key) return mid;
        else if (vector_name[mid] > key) right = mid - 1;
        else if (vector_name[mid] < key) left = mid + 1;
    }
    return -1;
}