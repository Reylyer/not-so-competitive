#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include<assert.h>
#define MAX_CHARACTERS 1005
#define MAX_PARAGRAPHS 5

char* kth_word_in_mth_sentence_of_nth_paragraph(char**** document, int k, int m, int n) {
    return document[n - 1][m - 1][k - 1];
}

char** kth_sentence_in_mth_paragraph(char**** document, int k, int m) { 
    return document[m - 1][k - 1];
}

char*** kth_paragraph(char**** document, int k) {
    return document[k - 1];
}

char**** get_document(char* text) {
    char* word = (char*) malloc(45 * sizeof(*word));
    char** sentence = (char**) malloc(30 * sizeof(*sentence));
    char*** paragraph = (char***) malloc(30 * sizeof(*paragraph));
    char**** document = (char****) malloc(6 * sizeof(*document));
    int cc = 0, wc = 0, sc = 0, pc = 0;
    do {
        switch(*text){
            case '\n':
                word[cc] = '\0';
                sentence[wc++] = word;
                word = (char*) malloc(45 * sizeof(*word));
                cc = 0;
                
                sentence[wc] = NULL;
                paragraph[sc++] = sentence;
                sentence = (char**) malloc(30 * sizeof(*sentence));
                wc = 0;

                paragraph[sc] = NULL;
                document[pc++] = paragraph;
                paragraph = (char***) malloc(30 * sizeof(*paragraph));
                sc = 0;
                break;
            case '.':
                word[cc] = '\0';
                sentence[wc++] = word;
                word = (char*) malloc(45 * sizeof(*word));
                cc = 0;

                sentence[wc] = NULL;
                paragraph[sc++] = sentence;
                sentence = (char**) malloc(30 * sizeof(*sentence));
                wc = 0;
                break;
            case ' ':
                word[cc] = '\0';
                sentence[wc++] = word;
                word = (char*) malloc(45 * sizeof(*word));
                cc = 0;
                break;
            default:
                word[cc++] = *text;
        }
        text++;
    } while (*text != '\0');
    word[cc] = '\0';
    sentence[wc++] = word; 
    sentence[wc] = NULL;
    paragraph[sc++] = sentence;
    paragraph[sc] = NULL;
    document[pc++] = paragraph;
    document[pc] = NULL;
    return document;
    
}


char* get_input_text() {	
    int paragraph_count;
    scanf("%d", &paragraph_count);

    char p[MAX_PARAGRAPHS][MAX_CHARACTERS], doc[MAX_CHARACTERS];
    memset(doc, 0, sizeof(doc));
    getchar();
    for (int i = 0; i < paragraph_count; i++) {
        scanf("%[^\n]%*c", p[i]);
        strcat(doc, p[i]);
        if (i != paragraph_count - 1)
            strcat(doc, "\n");
    }

    char* returnDoc = (char*)malloc((strlen (doc)+1) * (sizeof(char)));
    strcpy(returnDoc, doc);
    return returnDoc;
}

void print_word(char* word) {
    printf("%s", word);
}

void print_sentence(char** sentence) {
    int word_count;
    scanf("%d", &word_count);
    for(int i = 0; i < word_count; i++){
        printf("%s", sentence[i]);
        if( i != word_count - 1)
            printf(" ");
    }
} 

void print_paragraph(char*** paragraph) {
    int sentence_count;
    scanf("%d", &sentence_count);
    for (int i = 0; i < sentence_count; i++) {
        print_sentence(*(paragraph + i));
        printf(".");
    }
}

int main() 
{
    char* text = get_input_text();
    char**** document = get_document(text);

    int q;
    scanf("%d", &q);

    while (q--) {
        int type;
        scanf("%d", &type);

        if (type == 3){
            int k, m, n;
            scanf("%d %d %d", &k, &m, &n);
            char* word = kth_word_in_mth_sentence_of_nth_paragraph(document, k, m, n);
            print_word(word);
        }

        else if (type == 2){
            int k, m;
            scanf("%d %d", &k, &m);
            char** sentence = kth_sentence_in_mth_paragraph(document, k, m);
            print_sentence(sentence);
        }

        else{
            int k;
            scanf("%d", &k);
            char*** paragraph = kth_paragraph(document, k);
            print_paragraph(paragraph);
        }
        printf("\n");
    }     
}