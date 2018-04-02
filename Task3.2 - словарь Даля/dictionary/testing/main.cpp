#include <cstdio>
#include "dictionary.h"
#include "tree.h"
#include "valueStorage.h"
#include <cstring>
#include <iostream>
#include <cstdlib>

int main () {
    setlocale(0, "");
    FILE* in = fopen("SampleOEM866.txt", "r");
    Storage* store = new Storage(10);
    node* tree = new node("/0", 0);

    for (int i = 0; i < 100; ++i) {
        char* str = readLongString(in);
        int valueBegin = 0;
        int numOfKeys = 1;

        while (((*(str+valueBegin) <'�') || (*(str+valueBegin) > '�')) && (*(str + valueBegin) != '\n')) {

            if (*(str+valueBegin) == ',') {
                ++numOfKeys;
            }

            ++valueBegin;
        }

        int keyEnds = valueBegin - 1;
        char* value = new char[strlen(str) - valueBegin + 1];
        strcpy(value, str+valueBegin);
        //Value founded
        add(store, value);
        char* keys[numOfKeys];

        if (numOfKeys > 1) {
            int startPos = 0, endPos = 0;

            for (int j = 0; j < numOfKeys; ++j) {

                while((*(str + endPos) != ',') && (*(str+endPos) < keyEnds)) {
                    ++endPos;
                }

                keys[j] = new char[endPos - startPos - 1];
                strncpy(keys[j], str+startPos, endPos - startPos);
                //Key j founded
                insert(tree, keys[j], i);
                endPos+=2;
                startPos = endPos;
            }

        } else {
            keys[0] = new char[keyEnds+1];
            strncpy(keys[0], str, keyEnds);
            //Key founded
            insert(tree, keys[0], i);
        }

        free(str);
    }

}


