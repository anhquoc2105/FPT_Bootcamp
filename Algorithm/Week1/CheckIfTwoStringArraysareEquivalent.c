bool arrayStringsAreEqual(char** word1, int word1Size, char** word2, int word2Size) {
    char a[1001] = "";
    char b[1001] = "";
    for (int i = 0; i < word1Size; i++){
        strcat(a, word1[i]);
    }
    for (int i = 0; i < word2Size; i++){
        strcat(b, word2[i]);
    }
    return strcmp(a,b) == 0;
}